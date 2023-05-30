#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
	int size;
	int top;
	int *arr;
};

Stack *createStack(unsigned size)
{
	Stack *stack = new Stack;
	if (!stack){
		return NULL; //No space in memory
	}
	stack->top = -1;
	stack->size = size;
	stack->arr = (int *)malloc(stack->size * sizeof(int));
	if (!stack->arr)
		return NULL;
	return stack;
}

int main()
{
	Stack *stack = createStack(3);
	return 0;
}
