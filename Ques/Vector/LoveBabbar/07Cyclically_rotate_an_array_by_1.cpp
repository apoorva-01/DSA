#include <bits/stdc++.h>
using namespace std;


void rotate(vector<int> &nums)
{
	int x = nums.back();
	nums.pop_back();
	nums.insert(nums.begin(), x);
}

int main()
{
	vector<int> nums{8, 1, 0, 4, 6};
	rotate(nums);

	printf("\nRotated array is\n");

	for (auto i : nums)
	{
		cout << i << " ";
	}
	return 0;
}
