#include <stdio.h>
#include <stdlib.h>
#define MAX 100	
struct stack
{
    int size;
    int top;
    int *arr;
};

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

void push(struct stack *ptr, char val)
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

char pop(struct stack *ptr)
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

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully\n");

    char str[MAX];
    printf("Input a string: ");
    scanf("%[^\n]s", str); /*read string with spaces*/
    /*gets(str);-can be used to read string with spaces*/

    for (int i = 0; i < strlen(str); i++)
    {
        push(sp, str[i]);
    }

    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = pop(sp);
    }

    printf("Reversed String is: %s\n", str);

    return 0;
}
