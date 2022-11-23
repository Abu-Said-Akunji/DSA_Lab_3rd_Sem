/*Q6.A stack data structure is given with push and pop operations. WAP to
implement a queue using instances of stack data structure and operations
on them.*/

#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int top;
    unsigned size;
    int *stackArray;
};
struct Stack *createStack(unsigned size)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->size = size;
    stack->top = -1;
    stack->stackArray = (int *)malloc(stack->size * sizeof(int));
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
    stack->stackArray[++stack->top] = value;
    printf("%d pushed to stack\n", value);
}

int pop(struct Stack *stack)
{
    if (isEmpty(stack))
        return -10000;
    return stack->stackArray[stack->top--];
}

int peek(struct Stack *stack)
{
    if (isEmpty(stack))
        return -10000;
    return stack->stackArray[stack->top];
}

struct Queue
{
    struct Stack *stack1;
    struct Stack *stack2;
};

void enqueue(struct Queue *queue, int value)
{
    push(queue->stack1, value);
    printf("Element Inserted into Queue\n");
}
int dequeue(struct Queue *queue)
{
    int x, y;
    while (!isEmpty(queue->stack1))
    {
        // take an element out of first stack
        x = pop(queue->stack1);
        // insert it into the second stack
        push(queue->stack2, x);
    }
    y = pop(queue->stack2);
    while (!isEmpty(queue->stack2))
    {
        x = pop(queue->stack2);
        push(queue->stack1, x);
    }
    return y;
}

int main()
{

    struct Queue *queue = (struct Queue *)malloc(sizeof(struct Queue));
    queue->stack1 = createStack(100);
    queue->stack2 = createStack(100);

    enqueue(queue, 10);
    enqueue(queue, 100);
    enqueue(queue, 1000);
    printf("Removing element from queue: %d", dequeue(queue));

    free(queue);

    getchar();
    getchar();
    return 0;
}
// struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));