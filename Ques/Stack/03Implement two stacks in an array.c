#include <stdio.h>
#include <limits.h>
#include <malloc.h>

#define ARRAY_SIZE 100
#define LEFT_STACK 0
#define RIGHT_STACK 1

struct stack
{
    int array[ARRAY_SIZE];
    int top1, top2;
};


void push(struct stack * sp,int whichStack, int num)
{
    if (whichStack == LEFT_STACK)
    {
        if (sp->top1 < sp->top2 - 1)
        {
            sp->top1++;
            sp->array[sp->top1] = num;
        }
        else
        {
            printf("Left Stack Full");
            return;
        }
    }
    else if (whichStack == RIGHT_STACK)
    {
        if (sp->top1 < sp->top2 - 1)
        {
            sp->top2--;
            sp->array[sp->top2] = num;
        }
        else
        {
            printf("Right Stack Full");
            return;
        }
    }
}

int pop(struct stack * sp,int whichStack)
{
    if (whichStack == LEFT_STACK)
    {
        if (sp->top1 >= 0)
        {
            return sp->array[sp->top1--];
        }
        else
        {
            printf("Left Stack is Empty");
            return INT_MIN;
        }
    }
    else if (whichStack == RIGHT_STACK)
    {
        if (sp->top2 <= ARRAY_SIZE - 1)
        {
            return sp->array[sp->top2++];
        }
        else
        {
            printf("Right Stack is Empty");
            return INT_MIN;
        }
    }
}

int main()
{
    
    struct stack *sp = (struct stack *) malloc(sizeof(struct stack));
    sp->top1 = -1;
    sp->top2 = ARRAY_SIZE;
    /* Push element in left stack */
    push(sp,LEFT_STACK, 2);
    push(sp,LEFT_STACK, 4);
    push(sp,LEFT_STACK, 6);
    /* Push element in right stack */
    push(sp,RIGHT_STACK, 1);
    push(sp,RIGHT_STACK, 3);
    push(sp,RIGHT_STACK, 5);
    /*Pop Elements from left stack */
    printf("Pop from left stack %d\n", pop(sp,LEFT_STACK));
    /*Pop Elements from right stack */
    printf("Pop from right stack %d\n", pop(sp,RIGHT_STACK));
    return 0;
}