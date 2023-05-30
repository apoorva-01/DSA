
// https://www.geeksforgeeks.org/chocolate-distribution-problem/
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

// A simple solution is to generate all subsets of size m of arr[0..n-1]. 
// For every subset, find the difference between the maximum and minimum elements in it. Finally, return the minimum difference.


// An efficient solution is based on the observation that to minimize the difference, we must choose consecutive elements from a sorted packet. We first sort the array arr[0..n-1], then find the subarray of size m with the minimum difference between the last and first elements.

int cmpfunc(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}


int findMinDiff(int arr[], int n, int m)
{
	// if there are no chocolates or number of students is 0
	if (m == 0 || n == 0)
		return 0;

	// Sort the given packets array
	qsort(arr, n, sizeof(int), cmpfunc);

	// Number of packets cannot be less than number of students
	if (n < m)
		return -1;

	// Largest number of chocolates
	int min_diff = INT_MAX;

	// Find the subarray of size m such that
	// difference between last (maximum in case
	// of sorted) and first (minimum in case of
	// sorted) elements of subarray is minimum.

	// findind the subarray of size m == Start point is i and End is m
	for (int i = 0; i + m - 1 < n; i++) {
		// diffrence is last element - first element
		int diff = arr[i + m - 1] - arr[i];
		if (diff < min_diff){
			min_diff = diff;
		}
			
	}
	return min_diff;
}

int main()
{
	int arr[] = { 12, 4, 7, 9, 2, 23, 25, 41, 30,
				40, 28, 42, 30, 44, 48, 43, 50 };
	int m = 7; // Number of students
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Minimum difference is %d",
		findMinDiff(arr, n, m));
	return 0;
}

