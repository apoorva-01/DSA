#include <bits/stdc++.h>
using namespace std;

#define MAX(x, y) (((x) > (y)) ? (x) : (y))

// Que-- Given an array of integers of size ‘n’
// Calculate the maximum sum of ‘k’ consecutive elements/ subarray of size k in the array.

// Time Complexity O(n)
// Space Complexity O(1)
int slidingWindow(vector<int> nums, int k)
{
    if (nums.size() < k)
    {
        cout<<"Invalid";
        return -1;
    }
    // Compute sum of first window of size k
    int window_sum = 0;
    for (int i = 0; i < k; i++){
         window_sum += nums[i];
    }
       

    // Compute sums of remaining windows by
    // removing first element of previous
    // window and adding last element of current window.
    int max_sum = window_sum;
    for (int i = k; i < nums.size(); i++)
    {
        window_sum += nums[i] - nums[i - k];
        max_sum = MAX(max_sum, window_sum);
    }

    return max_sum;
}

int main()
{
    vector<int> nums{1, 4, 2, 10, 2, 3, 1, 0, 20};
    int k = 4;
    cout<<slidingWindow(nums, k);
    return 0;
}
