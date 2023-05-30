#include <bits/stdc++.h>
using namespace std;

// Que
// Given an numsay of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number.

// Floyd
int floyd(vector<int> &nums)
{
	int slow = nums[0]; // Starting point of the slow
    int fast = nums[0]; // Starting point of the fast

    // Move the slow by one step and the fast by two steps until they meet
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // Reset the slow to the starting point
    slow = nums[0];

    // Move the slow and fast at the same speed until they meet at the entrance of the cycle
    while (slow != fast) {
        slow = nums[slow];   // Move both by one step 
        fast = nums[fast];
    }
    return fast; // Return the repeated number
	
	// Time Complexity O(n)
    // Space Complexity O(1)
}


// Hashing
int hashSol(vector<int> &nums)
{
	int res=0;
	unordered_map<int,int> mp;
	for(auto i:nums){
		mp[i]++;
	}
	for(auto pr:mp){
		if(pr.second>1){
			res=pr.first;
		}
	}
	return res;
	// Time Complexity O(n)
    // Space Complexity O(n)
}

int brute(vector<int> nums)
{
	int ind = 0;
	for (int i = 0; i < nums.size() - 1; i++)
	{
		// Focus on LIMITS
		for (int j = i + 1; j < nums.size(); j++)
		{
			if (nums[i] == nums[j])
			{
				ind = nums[i];
				break;
			}
		}
	}
	return ind;
	// Time Complexity O(n^2)
    // Space Complexity O(1)
}

int naive(vector<int> &nums)
{
	int ind = 0;

	sort(nums.begin(), nums.end());
	for (int i = 0; i < nums.size() - 1; i++)
	{
		// if two consecutive elements are equal
		if (nums[i] == nums[i + 1])
		{
			ind = nums[i];
			break;
		}
	}
	return ind;
	// Time Complexity O(nlogn)
    // Space Complexity O(1)
}



int main()
{
	vector<int> nums{1,3,4,2,2};
	cout<<floyd(nums)<<endl;
	cout<<hashSol(nums)<<endl;
	cout<<brute(nums)<<endl;
	cout<<naive(nums)<<endl;
	return 0;
}
