#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int size;
    int top;
    int *arr;
};

int isEmpty(Stack *ptr)
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

int isFull(Stack *ptr)
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

void push(Stack *ptr, int val)
{
    if (isFull(ptr))
    {
        cout<<"Stack Overflow! Cannot push "<<val<<" to the stack\n";
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
    // Time Complexity: O(1)
}

int pop(Stack *ptr)
{
    if (isEmpty(ptr))
    {
        cout<<"Stack Underflow! Cannot pop from the stack";
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

int peek(Stack *sp, int i)
{
    // i is position
    // arrayIndex = top - position +1
    int arrayInd = sp->top - i + 1;
    if (arrayInd < 0)
    {
        cout<<"Not a valid position for the stack"<<endl;
        return -1;
    }
    else
    {
        return sp->arr[arrayInd];
    }
    // Time Complexity: O(1)
}

void display(Stack *s)
{
    if (isEmpty(s))
    {
        cout << "Empty" << endl;
    }
    for (int i = s->top; i > -1; i--)
    {
        cout << s->arr[i] << " ";
    };
    cout << endl;
    // Time Complexity: O(n)
}

int main()
{
    Stack *s = new Stack;
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    cout << "Stack has been created successfully" << endl;
    cout << "is Empty: " << isEmpty(s) << endl;
    cout << "is Full: " << isFull(s) << endl;
    cout << "pushing 3, 2, 1, 5,6" << endl;
    push(s, 3);
    push(s, 2);
    push(s, 1);
    push(s, 5);
    push(s, 6);
    display(s);
    cout << "popping 2 times" << endl;
    pop(s);
    pop(s);
    display(s);

    return 0;
}
