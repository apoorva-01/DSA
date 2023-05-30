#include <bits/stdc++.h>
using namespace std;
// Kadane’s Algorithm:

// Initialize:
//     max_sum = INT_MIN
//     curr_sum = 0

// Loop for each element of the nums
//   (a) curr_sum = curr_sum + a[i]
//   (b) if(max_sum < curr_sum)
//             max_sum = curr_sum
//   (c) if(curr_sum < 0)
//             curr_sum = 0
// return max_sum

int kadane(vector<int> nums)
{
  int max_sum = INT_MIN, curr_sum = 0;

  for (int i = 0; i < nums.size(); i++)
  {
    curr_sum += nums[i];

    if (max_sum < curr_sum)
      max_sum = curr_sum;

    if (curr_sum < 0)
      curr_sum = 0;
  }
  return max_sum;
}


int main()
{

  vector<int> nums{8, 1, 0, 4, 6};

  cout<<kadane(nums);

  return 0;
}