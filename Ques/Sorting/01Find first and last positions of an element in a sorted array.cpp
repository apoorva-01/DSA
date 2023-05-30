#include <bits/stdc++.h>
using namespace std;

// Time Complexity O(logn)
// Space Complexity O(1)
vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> result = {-1, -1};
    if (nums.empty())
    {
        return result;
    }
    int left = 0;
    int right = nums.size() - 1;
    int mid = 0;

    while (left <= right)
    {
        mid = (left + right) / 2;
        if (nums[mid] == target)
        {
            break;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else if (nums[mid] > target)
        {
            right = mid - 1;
        }
    }

    // Finding lowest index with value==target
    for (int i = mid; i >= 0; i--)
    {
        if (nums[i] == target)
        {
            result[0] = i;
        }
    }
    // Finding highest index with value==target
    for (int i = mid; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            result[1] = i;
        }
    }

    return result;
}


// Time Complexity O(n)
// Space Complexity O(1)
vector<int> brute(vector<int> &nums, int target)
{
    int startingPosition = -1, endingPosition = -1;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            startingPosition = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (nums[i] == target)
        {
            endingPosition = i;
            break;
        }
    }
    return {startingPosition, endingPosition};
}

// Time Complexity O(n)
// Space Complexity O(1)
vector<int> searchRange(vector<int> &nums, int target)
{
    auto low = lower_bound(nums.begin(), nums.end(), target);
    auto up = upper_bound(nums.begin(), nums.end(), target);
    if (low == nums.end() || *low != target)
        return {-1, -1};
    int first = low - nums.begin();
    int last = up - nums.begin() - 1;
    return {first, last};
}


int main()
{

    return 0;
}