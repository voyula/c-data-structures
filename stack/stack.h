#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Stack
{
    unsigned int top;
    unsigned int capacity;
    int* array;
};

struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    return stack;
}

int capacity(struct Stack* stack)
{
    return stack->capacity;
}

void clear(struct Stack* stack)
{
    stack->top = -1;
}

bool isFull(struct Stack* stack)
{
    return stack->top == stack->capacity - 1;
}

bool isEmpty(struct Stack* stack)
{
    return stack->top == -1;
}

peek(struct Stack* stack)
{
    return stack->array[stack->top];
}

void push(struct Stack* stack, int item)
{
    if (isFull(stack)) {
        return;
    }
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}

int pop(struct Stack* stack)
{
    if (isEmpty(stack)) {
        return INT_MIN;
    }
    return stack->array[stack->top--];
}
