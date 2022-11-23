/*Q2.Write a menu driven program to implement queue operations such as Enqueue,
Dequeue, Peek, Display of elements, IsEmpty using linked list.*/

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL, *bottom = NULL;

int enqueue()
{
    int num;
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = num;
    newNode->next = NULL;
    printf("Enter the data: ");
    scanf("%d", &num);

    if (top == NULL && bottom == NULL)
        top = bottom = newNode;
    else
    {
        bottom->next = newNode;
        bottom = newNode;
    }
}

void dequeue()
{
    struct node *ptr;

    if (top == NULL)
        printf("Queue is Empty!\n");
    else
    {
        ptr = top;
        top = top->next;
        if (top == NULL)
            bottom = NULL;
        free(ptr);
    }
}

void display()
{
    struct node *ptr = top;

    while (ptr)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main()
{
    int n, i;
    printf("Enter the number of nodes you want to add: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        enqueue();
    }
    printf("Queue :");
    display();
    dequeue();
    printf("New Queue after dequeue:");
    display();
    dequeue();
    printf("New Queue after dequeue::");
    display();
    return 0;
}