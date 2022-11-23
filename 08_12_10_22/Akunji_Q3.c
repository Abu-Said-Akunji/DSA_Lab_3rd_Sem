/*Q3.Write a menu driven program to implement circular queue operations such as
Enqueue, Dequeue, Peek, Display of elements, IsEmpty, IsFull using
static array.*/

#include <stdio.h>

#define MAX 10
int queue[MAX];
int front = -1;
int rear = -1;

void Enqueue(void);
int Dequeue(void);
int peek(void);
void display(void);
void IsEmpty(void);
void IsFull(void);
void main()
{
    int val, option;

    do
    {
        printf("\n****MAIN MENU****");
        printf("\n 1. Enqueue an element");
        printf("\n 2. Dequeue an element");
        printf("\n 3. PEEK");
        printf("\n 4. Display the queue");
        printf("\n 5. Is Empty");
        printf("\n 6. Is full");
        printf("\n 7. EXIT");
        printf("\n Enter your option");
        scanf("%d", &option);

        switch (option)
        {

        case 1:

            Enqueue();
            break;

        case 2:

            val = Dequeue();

            if (val != -1)
                printf("\n The deleted element from queue is : %d", val);
            break;

        case 3:

            val = peek();

            if (val != -1)
                printf("\n The first value in queue is : %d", val);
            break;

        case 4:

            display();
            break;

        case 5:

            IsEmpty();
            break;

        case 6:

            IsFull();
            break;
        }

    } while (option != 7);
}

void Enqueue()
{

    int num;
    printf("\n Enter the number to be inserted in queue :");
    scanf("%d", &num);

    if (rear == (MAX - 1) || rear == (front - 1))
        printf("\nThe Queue overflow");

    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = num;
    }

    else
    {
        rear++;
        queue[rear] = num;
    }
}

int Dequeue()
{
    int val;
    if (front == -1 || rear == -1)
    {
        printf("\nThe Queue underflow");
        return -1;
    }
    else
    {
        val = queue[front];
        front++;

        if (front > rear)
            front = rear = -1;

        return val;
    }
}

int peek()
{

    if (front == -1 || rear == -1)
    {
        printf("\nThe Queue is empty");
        return -1;
    }
    else

        return (queue[front]);
}

void display()
{
    int i;
    if (front == -1 || rear == -1)
    {
        printf("\nThe Queue is empty");
    }

    else
    {
        for (i = front; i <= rear; i++)
            printf("\t%d", queue[i]);
    }
}
void IsEmpty()
{
    if (front == -1 || rear == -1)
    {
        printf("\n The Queue is empty");
    }
    else
        printf("\n The Queue is not empty");
}
void IsFull()
{
    if (rear == (MAX - 1))
    {
        printf("\n THe Queue is Full");
    }
    else if (rear == front - 1)
    {
        printf("\n THe Queue is Full");
    }
    else
        printf("\n The Queue is not Full");
}