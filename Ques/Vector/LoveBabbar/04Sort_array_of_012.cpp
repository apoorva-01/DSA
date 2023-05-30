#include <bits/stdc++.h>
using namespace std;

// Dutch National Flag (DNF Sort)
// Time Complexity O(n)
// Space Complexity O(1)
void dnf(vector<int> &nums)
{
	int low=0;
	int mid=0;
	int high=nums.size()-1;
	while(mid<=high){
		switch (nums[mid]) {
        // If the element is 0
        case 0:
            swap(nums[low++], nums[mid++]); //Time and Space complexity of swap() is O(1)
            break;
 
        // If the element is 1 .
        case 1:
            mid++;
            break;
 
        // If the element is 2
        case 2:
            swap(nums[mid], nums[high--]);
            break;
		}
	}
	return ;
}

// Time Complexity O(n)
// Space Complexity O(1)
void sort012(vector<int> &nums)
{
	// Count the number of 0’s, 1’s and 2’s.
	// After Counting, put all 0’s first, then 1’s and lastly 2’s in the array.
	// Time complexity will be O(n).

	int countof0 = count(nums.begin(), nums.end(), 0);// O(n)
	int countof1 = count(nums.begin(), nums.end(), 1);
	int countof2 = count(nums.begin(), nums.end(), 2);
	nums.clear();

	while (countof0)
	{
		nums.push_back(0);//O(1)
		countof0--;
	}
	while (countof1)
	{
		nums.push_back(1);
		countof1--;
	}
	while (countof2)
	{
		nums.push_back(2);
		countof2--;
	}

	return;

}

void display(vector<int> vect)
{
	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << " ";
	}
	cout << endl;
}

int main()
{
	vector<int> s{0,2,1,2,0,1,2,1,0};
	display(s);
	// sort012(s);
	dnf(s);
	display(s);
	return 0;
}
