/*Q7.A queue data structure is given with enqueue and dequeue
operations. WAP to implement a stack using instances of queue data
structure and operations on them.*/

#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int top;
    unsigned size;
    int *s_Array;
};
struct Stack *createStack(unsigned size)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->size = size;
    stack->top = -1;
    stack->s_Array = (int *)malloc(stack->size * sizeof(int));
    return stack;
}
int isFull(struct Stack *stack)
{
    return stack->top == stack->size - 1;
}

int isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}

void push(struct Stack *stack, int value)
{
    if (isFull(stack))
        return;
    stack->s_Array[++stack->top] = value;
    printf("%d pushed to stack\n", value);
}

int pop(struct Stack *stack)
{
    if (isEmpty(stack))
        return -10000;
    return stack->s_Array[stack->top--];
}

int peek(struct Stack *stack)
{
    if (isEmpty(stack))
        return -10000;
    return stack->s_Array[stack->top];
}

struct Queue
{
    struct Stack *s1;
    struct Stack *s2;
};

void enqueue(struct Queue *queue, int value)
{
    push(queue->s1, value);
    printf("Element Inserted into Queue\n");
}
int dequeue(struct Queue *queue)
{
    int x, y;
    while (!isEmpty(queue->s1))
    {
        x = pop(queue->s1);
        push(queue->s2, x);
    }
    y = pop(queue->s2);
    while (!isEmpty(queue->s2))
    {
        x = pop(queue->s2);
        push(queue->s1, x);
    }
    return y;
}

int main()
{

    struct Queue *queue = (struct Queue *)malloc(sizeof(struct Queue));
    queue->s1 = createStack(100);
    queue->s2 = createStack(100);

    enqueue(queue, 10);
    enqueue(queue, 100);
    enqueue(queue, 1000);
    printf("Removing element from queue: %d", dequeue(queue));

    free(queue);

    getchar();
    getchar();
    return 0;
}