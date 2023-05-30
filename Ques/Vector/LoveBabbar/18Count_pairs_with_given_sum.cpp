#include <bits/stdc++.h>
using namespace std;


// https://www.geeksforgeeks.org/count-pairs-with-given-sum/
// Time Complexity: O(n), to iterate over the array
// Auxiliary Space: O(n), to make a map of size n
int getPairsCount(vector<int> nums, int sum)
{
	int count = 0;
	unordered_map<int,int> m;
	for(int i=0;i<nums.size();i++){
		m[nums[i]]++;
	}
	for(int i=0;i<nums.size();i++){
		count+=m[sum-nums[i]];
		// if (arr[i], arr[i]) pair satisfies the condition,
        // then we need to ensure that the count is
        // decreased by one such that the (arr[i], arr[i])
        // pair is not considered
        if (sum - nums[i] == nums[i]){
			 count--;
		}
	}
	return count/2;
}

// Traverse each element and check if there’s another number in the array which can be added to it to give sum.
// Time Complexity: O(n^2)
// Auxiliary Space: O(1)
int brute(vector<int> nums, int sum)
{
	int count = 0; // Initialize result

	// Consider all possible pairs and check their sums
	for (int i = 0; i < nums.size(); i++){
		for (int j = i + 1; j < nums.size(); j++){
			if (nums[i] + nums[j] == sum){
				count++;
			}
		}
	}
		

	return count;
}

int main()
{
	vector<int> nums{ 1, 5, 7, -1, 5};
	int sum = 6;
	cout<<"Count of pairs is "<< brute(nums, sum)<<endl;
	cout<<"Count of pairs is "<< getPairsCount(nums, sum)<<endl;
	return 0;
}
