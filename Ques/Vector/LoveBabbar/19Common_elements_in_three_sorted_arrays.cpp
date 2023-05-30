#include <bits/stdc++.h>
using namespace std;

// Another Approach: Find intersection of 2 arrays and then find intersection of result and 3rd array

// Let current element traversed in nums1[] be x, in nums2[] be y and in nums3[] be z. We can have following cases inside the loop. 
// If x, y and z are same, we can simply print any of them as common element and move ahead in all three arrays.
// Else If x < y, we can move ahead in nums1[] as x cannot be a common element.
// Else If x > z and y > z, we can simply move ahead in nums3[] as z cannot be a common element.

void findCommon(vector<int> nums1, vector<int> nums2, vector<int> nums3)
{

	int i = 0, j = 0, k = 0;
	while (i < nums1.size() && j < nums2.size() && k < nums3.size()) {
		// If x = y and y = z, print any of them and move
		// ahead in all arrays
		if (nums1[i] == nums2[j] && nums2[j] == nums3[k]) {
			cout<<nums1[i]<<" ";
			i++;
			j++;
			k++;
		}
		// x < y
		else if (nums1[i] < nums2[j])
			i++;
		// y < z
		else if (nums2[j] < nums3[k])
			j++;
		// We reach here when x > y and z < y, i.e., z is
		// smallest
		else
			k++;
	}
}

int main()
{
	
	vector<int> nums1{ 1, 5, 10, 20, 40, 80};
	vector<int> nums2{ 6, 7, 20, 80, 100};
	vector<int> nums3{ 3, 4, 15, 20, 30, 70, 80, 120};

	printf("Common Elements are ");
	findCommon(nums1, nums2, nums3);
	return 0;
}

