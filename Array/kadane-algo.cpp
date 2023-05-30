#include <iostream>
using namespace std;
#include <limits.h>

// Kadane’s Algorithm: Max sum Sub Array

// Initialize:
//     max_sum = INT_MIN
//     curr_sum = 0

// Loop for each element of the array
//   (a) curr_sum = curr_sum + a[i]
//   (b) if(max_sum < curr_sum)
//             max_sum = curr_sum
//   (c) if(curr_sum < 0)
//             curr_sum = 0
// return max_sum

int kadane(int arr[], int n)
{
  int max_sum = INT_MIN, curr_sum = 0;

  for (int i = 0; i < n; i++)
  {
    curr_sum += arr[i];
    if (max_sum < curr_sum)
      max_sum = curr_sum;

    if (curr_sum < 0)
      curr_sum = 0;
  }
  return max_sum;
}

int main()
{

  int arr[] = {2, -4, -2, 1, 5, 7, -8, 3};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("%d ", kadane(arr, n));

  return 0;
}