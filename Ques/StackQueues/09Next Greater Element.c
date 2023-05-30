#include<stdio.h>
// Given an array, print the Next Greater Element (NGE) for every element. 
// The Next greater Element for an element x is the first greater element on the right side of x in the array. 
// Elements for which no greater element exist, consider the next greater element as -1. 


void printNGE(int arr[], int n)
{
	int next, i, j;
	for (i=0; i<n; i++)
	{
		next = -1;
		for (j = i+1; j<n; j++)
		{
			if (arr[i] < arr[j])
			{
				next = arr[j];
				break;
			}
		}
		printf("%d -- %d \sn", arr[i], next);
	}
}

int main()
{
	int arr[]= {11, 13, 21, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
	printNGE(arr, n);
	return 0;
}
