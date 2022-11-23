/*Q5.Write a menu driven program to implement circular queue operations such as
Enqueue, Dequeue, Peek, Display of elements, IsEmpty using linked list.*/

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
void enqueue(int d)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = d;
    n->next = NULL;
    if ((rear == NULL) && (front == NULL))
    {
        front = rear = n;
        rear->next = front;
    }
    else
    {
        rear->next = n;
        rear = n;
        n->next = front;
    }
}
void dequeue()
{
    struct node *t;
    t = front;
    if ((front == NULL) && (rear == NULL))
        printf("\nQueue is Empty");
    else if (front == rear)
    {
        front = rear = NULL;
        free(t);
    }
    else
    {
        front = front->next;
        rear->next = front;
        free(t);
    }
}
void print()
{
    struct node *t;
    t = front;
    if ((front == NULL) && (rear == NULL))
        printf("\nQueue is Empty");
    else
    {
        do
        {
            printf("\n%d", t->data);
            t = t->next;
        } while (t != front);
    }
}
int main()
{
    int opt, n, i, data;
    printf("Enter Your Choice:-");
    do
    {
        printf("\n\n1 for Insert the Data in Queue\n2 for show the Data in Queue \n3 for Delete the data from the Queue\n0 for Exit");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            printf("\nEnter the number of data");
            scanf("%d", &n);
            printf("\nEnter your data");
            i = 0;
            while (i < n)
            {
                scanf("%d", &data);
                enqueue(data);
                i++;
            }
            break;
        case 2:
            print();
            break;
        case 3:
            dequeue();
            break;
        case 0:
            break;
        default:
            printf("\nIncorrect Choice");
        }
    } while (opt != 0);
    return 0;
}