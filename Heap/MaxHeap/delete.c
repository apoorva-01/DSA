#include <stdio.h>
#define MAX_SIZE 100

// returns the index of the parent node
int parent(int i)
{
    return (i - 1) / 2;
}

// return the index of the left child
int left_child(int i)
{
    return 2 * i + 1;
}

// return the index of the right child
int right_child(int i)
{
    return 2 * i + 2;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// moves the item at position i of array a
// into its appropriate position
void max_heapify(int arr[], int i, int n)
{
    // find left child node
    int left = left_child(i);
    // find right child node
    int right = right_child(i);
    // find the largest among 3 nodes
    int largest = i;

    // check if the left node is larger than the current node
    if (left <= n && arr[left] > arr[largest])
    {
        largest = left;
    }

    // check if the right node is larger than the current node
    if (right <= n && arr[right] > arr[largest])
    {
        largest = right;
    }

    // swap the largest node with the current node
    // and repeat this process until the current node is larger than
    // the right and the left node
    if (largest != i)
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        max_heapify(arr, largest, n);
    }
}

// converts an array into a heap
void build_max_heap(int arr[], int n)
{
    int i;
    for (i = n / 2; i >= 0; i--)
    {
        max_heapify(arr, i, n);
    }
}

// returns the  maximum item of the heap
int get_max(int arr[])
{
    return arr[0];
}

int del(int arr[], int n)
{
    int max_item = arr[0];

    // replace the first item with the last item
    arr[0] = arr[n - 1];
    n = n - 1;

    // maintain the heap property by heapifying the
    // first item
    max_heapify(arr, 0, n);
    return max_item;
}

// prints the heap
void print_heap(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {10, 12, 9, 78};
    int n = 4;
    build_max_heap(arr, n);
    print_heap(arr, n);
    printf("Deleted: %d \n", del(arr, n));
    print_heap(arr, n);
    return 0;
}
