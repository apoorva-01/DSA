#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
	int size;
	int top;
	int *arr;
};

int stackTop(Stack* sp){
    return sp->arr[sp->top];
    // Time Complexity: O(1) 
}


int stackBottom(Stack* sp){
    return sp->arr[0];
    // Time Complexity: O(1) 
}


void display(Stack* s){
   for(int i=s->top ; i>-1 ; i--){
    cout<<s->arr[i]<<" ";
   };
   cout<<endl;
    // Time Complexity: O(n) 
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
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
    // Time Complexity: O(1)
}

int main(){
    Stack *s= new Stack;
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    cout<<"pushing 3, 2, 1, 5,6"<<endl;
    push(s, 3);
    push(s, 2);
    push(s, 1);
    push(s, 5);
    push(s, 6);
    display(s);
    cout<<"Stack Top "<<stackTop(s)<<endl;
    cout<<"Stack Bottom "<<stackBottom(s)<<endl;
    return 0;
}
