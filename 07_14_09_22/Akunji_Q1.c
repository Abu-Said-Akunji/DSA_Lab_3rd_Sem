/*Q1. WAP TO ADD TWO POLYNOMIAL OF 2 VARIABLE (EX. 2X^2Y^3+XY+1, 5X^5Y+7XY+5)
USING LINKED LIST.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct link
{
    int coeff;
    int pow;
    struct link *next;
} my_poly;

void create_poly(my_poly **);
void show_poly(my_poly *);
void add_poly(my_poly **, my_poly *, my_poly *);

int main()
{
    int ch;
    do
    {
        my_poly *poly1, *poly2, *poly3;

        printf("\nCreate 1st expression\n");
        create_poly(&poly1);
        printf("\nStored the 1st expression");
        show_poly(poly1);

        printf("\nCreate 2nd expression\n");
        create_poly(&poly2);
        printf("\nStored the 2nd expression");
        show_poly(poly2);

        add_poly(&poly3, poly1, poly2);
        show_poly(poly3);

        printf("\nAdd two more expressions? (Y = 1/N = 0): ");
        scanf("%d", &ch);
    } while (ch);

    return 0;
}

void create_poly(my_poly **node)
{
    int flag;
    int coeff, pow;
    my_poly *tmp_node;
    tmp_node = (my_poly *)malloc(sizeof(my_poly));
    *node = tmp_node;
    do
    {
        printf("\nEnter Coeff:");
        scanf("%d", &coeff);
        tmp_node->coeff = coeff;
        printf("\nEnter Pow:");
        scanf("%d", &pow);
        tmp_node->pow = pow;

        tmp_node->next = NULL;

        printf("\nContinue adding more terms to the polynomial list?(Y = 1/N = 0): ");
        scanf("%d", &flag);

        if (flag)
        {
            tmp_node->next = (my_poly *)malloc(sizeof(my_poly)); // Grow the list
            tmp_node = tmp_node->next;
            tmp_node->next = NULL;
        }
    } while (flag);
}

void show_poly(my_poly *node)
{
    printf("\nThe polynomial expression is:\n");
    while (node != NULL)
    {
        printf("%dx^%d", node->coeff, node->pow);
        node = node->next;
        if (node != NULL)
            printf(" + ");
    }
}

void add_poly(my_poly **result, my_poly *poly1, my_poly *poly2)
{
    my_poly *tmp_node; // Temporary storage for the linked list
    tmp_node = (my_poly *)malloc(sizeof(my_poly));
    tmp_node->next = NULL;
    *result = tmp_node; // Copy the head address to the result linked list

    // Loop while both of the linked lists have value
    while (poly1 && poly2)
    {
        if (poly1->pow > poly2->pow)
        {
            tmp_node->pow = poly1->pow;
            tmp_node->coeff = poly1->coeff;
            poly1 = poly1->next;
        }
        else if (poly1->pow < poly2->pow)
        {
            tmp_node->pow = poly2->pow;
            tmp_node->coeff = poly2->coeff;
            poly2 = poly2->next;
        }
        else
        {
            tmp_node->pow = poly1->pow;
            tmp_node->coeff = poly1->coeff + poly2->coeff;
            poly1 = poly1->next;
            poly2 = poly2->next;
        }

        if (poly1 && poly2)
        {
            tmp_node->next = (my_poly *)malloc(sizeof(my_poly));
            tmp_node = tmp_node->next;
            tmp_node->next = NULL;
        }
    }

    while (poly1 || poly2)
    {

        tmp_node->next = (my_poly *)malloc(sizeof(my_poly));
        tmp_node = tmp_node->next;
        tmp_node->next = NULL;

        if (poly1)
        {
            tmp_node->pow = poly1->pow;
            tmp_node->coeff = poly1->coeff;
            poly1 = poly1->next;
        }
        if (poly2)
        {
            tmp_node->pow = poly2->pow;
            tmp_node->coeff = poly2->coeff;
            poly2 = poly2->next;
        }
    }

    printf("\nAddition Complete");
}