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

// insert the item at the appropriate position
void insert(int a[], int data, int n)
{
    if (n >= MAX_SIZE)
    {
        printf("%s\n", "The heap is full. Cannot insert");
        return;
    }
    // first insert the time at the last position of the array
    // and move it up
    n = n + 1;
    a[n] = data;

    // move up until the heap property satisfies
    int i = n;

    while (i != 0)// Until we reach root node
    {
        if (a[parent(i)] < a[i])
        {
            // If parent is less than child
            swap(&a[parent(i)], &a[i]);
            i = parent(i);
        }
        else{
            return;
        }
    }
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

// returns the  maximum item of the heap
int get_max(int a[])
{
    return a[0];
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
    int n = 10;
    int a[MAX_SIZE] = {10, 12, 9, 78, 33, 21, 35, 29, 5, 66};
    build_max_heap(a, n);
    insert(a, 55, n);
    // insert(a, 56, n);
    // insert(a, 57, n);
    // insert(a, 58, n);
    // insert(a, 100, n);
    print_heap(a, n);
    return 0;
}
