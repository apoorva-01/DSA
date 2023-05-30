#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
    // Time Complexity: O(n)
}
int threeWayPartition(int arr[], int n, int low, int high)
{
    
    int i, j, k, f = 0, s = 0, t = 0, first[10], second[10], third[10];

    for (int i = 0; i < low; i++)
    {
        first[f] = arr[i];
        f++;
    }
    printf("First Array:\n");
    display(first,low);
    for (int j = low; j < high; j++)
    {
        second[s] = arr[j];
        s++;
    }
    printf("Second Array: \n");
    display(second,high-low);
    for (int k = high; k < n; k++)
    {
        third[t] = arr[k];
        t++;
    }
    printf("Third Array: \n");
    display(third,n-high);
    return 1;
}

int main()
{
    int arr[] = {7, 8, 12, 27, 88};
    int size = sizeof(arr) / sizeof(arr[0]);
    // display(arr, size);

    // Find index of low and high value and insert in function
    threeWayPartition(arr, size, 1, 3);

    return 0;
}
