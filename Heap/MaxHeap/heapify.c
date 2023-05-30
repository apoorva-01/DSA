#include <stdio.h>
#define MAX_SIZE 100

// return the index of the right child
int right_child(int i)
{
    return 2 * i + 2;
}
// return the index of the left child
int left_child(int i)
{
    return 2 * i + 1;
}

// moves the item at position i of array a
// into its appropriate position
void max_heapify(int a[], int i, int n)
{
    // find left child node
    int left = left_child(i);

    // find right child node
    int right = right_child(i);

    // find the largest among 3 nodes
    int largest = i;

    // check if the left node is larger than the current node
    if (left <= n && a[left] > a[largest])
    {
        largest = left;
    }

    // check if the right node is larger than the current node
    if (right <= n && a[right] > a[largest])
    {
        largest = right;
    }

    // swap the largest node with the current node
    // and repeat this process until the current node is larger than
    // the right and the left node
    if (largest != i)
    {
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        max_heapify(a, largest, n);
    }
}

// converts an array into a heap
void build_max_heap(int a[], int n)
{
    int i;
    for (i = n / 2; i >= 0; i--)
    {
        max_heapify(a, i, n);
    }
}

// prints the heap
void print_heap(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }

    printf("\n");
}

int main()
{
    int a[MAX_SIZE] = {10, 12, 9, 78};
    int n = 4;
    build_max_heap(a, n);
    print_heap(a, n);
    return 0;
}
