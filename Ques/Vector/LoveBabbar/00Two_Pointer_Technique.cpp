#include <bits/stdc++.h>
using namespace std;
// Que---- Given a sorted array A (sorted in ascending order), having N integers.
// Find if there exists any pair of elements (A[i], A[j]) such that their sum is equal to X.


// Two Pointer------- Used for searching pairs in a Sorted array.
// Time Complexity O(n)
// Space Complexity O(1)
int towPointer(vector<int> nums, int val)
{
	int i = 0; // Represents first pointer
	int j = nums.size() - 1; // Represents second pointer
	while (i < j)
	{
		// If we find a pair
		if (nums[i] + nums[j] == val){
			return 1;
		}

		// If sum of elements at current
		// pointers is less, we move towards
		// higher values by doing i++
		else if (nums[i] + nums[j] < val){
            i++;
        }

		// If sum of elements at current
		// pointers is more, we move towards
		// lower values by doing j--
		else{
            j--;
        }
			
	}
	return 0;
}

int main()
{
	vector<int> nums{ 2, 3, 5, 8, 9, 10, 11 };
	int val = 17;
	cout<<towPointer(nums, val);

	return 0;
}
