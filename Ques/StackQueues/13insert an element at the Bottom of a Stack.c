#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int stackTop(struct stack* sp){
    return sp->arr[sp->top];
    // Time Complexity: O(1) 
}

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
    // Time Complexity: O(1)
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
    // Time Complexity: O(1)
}
int peek(struct stack *sp, int i)
{
    // i is position
    // arrayIndex = top - position +1
    int arrayInd = sp->top - i + 1;
    if (arrayInd < 0)
    {
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else
    {
        return sp->arr[arrayInd];
    }
    // Time Complexity: O(1)
}

void insertToBottom(struct stack *sp, int val)
{
    struct stack *temp = (struct stack *)malloc(sizeof(struct stack));
    temp->size = 10;
    temp->top = -1;
    temp->arr = (int *)malloc(sp->size * sizeof(int));
    while (!isEmpty(sp))
    {
        push(temp, stackTop(sp));
        pop(sp);
    }
    push(sp, val);
    while (!isEmpty(temp))
    {
        push(sp, stackTop(temp));
        pop(temp);
    }
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    push(sp, 2);
    push(sp, 4);
    push(sp, 1);
    push(sp, 8);
    printf("\nBefore\n");
    printf("%d \t", peek(sp, 1));
    printf("%d \t", peek(sp, 2));
    printf("%d \t", peek(sp, 3));
    printf("%d \t", peek(sp, 4));
    insertToBottom(sp, 44);
    printf("\nAfter\n");
    printf("%d \t", peek(sp, 1));
    printf("%d \t", peek(sp, 2));
    printf("%d \t", peek(sp, 3));
    printf("%d \t", peek(sp, 4));
    printf("%d \t", peek(sp, 5));

    return 0;
}
