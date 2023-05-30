#include <bits/stdc++.h>
using namespace std;

// Que https://leetcode.com/problems/rotate-array

void rotate(vector<int>& nums,int k) {
    // Correct but ----- Time Limit Exceeded

    // while(k){
    //     int x=nums.back();
    //     nums.pop_back();
    //     nums.insert(nums.begin(),x);
    //     k--;
    // }

    
    k = k % nums.size();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
    // Reverse the array three times. 
    // For the first time we reverse entire array. 
    // Second time we will reverse first k elements. 
    // Finally we will reverse the kth elecmt to last.
}


int main()
{
    vector<int>nums{1,2,3,4,5,6,7};
    rotate(nums,3);
    for(auto i:nums){
        cout<<i<<" ";
    }
    return 0;
}
