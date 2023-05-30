#include <bits/stdc++.h>
using namespace std;

int isSubset(vector<int> nums1,vector<int> nums2)
{
	unordered_map<int,int> mp;
	for(auto x:nums1){
		mp[x]++;
	}
	for(int i=0;i<nums2.size();i++){
		if(mp.find(nums2[i])==mp.end()){
			return 0;
		}
	}
	return 1;

}

int main()
{
	vector<int> nums1 {11, 1, 13, 21, 3, 7};
	vector<int> nums2 {11, 3, 7, 1};


	if (isSubset(nums1,nums2))
		printf("arr2[] is subset of arr1[] ");
	else
		printf("arr2[] is not a subset of arr1[]");

	return 0;
}
