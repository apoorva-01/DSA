
#include <bits/stdc++.h>
using namespace std;
// Que----- https://leetcode.com/problems/move-zeroes/

// Time Complexity O(n)
// Space Complexity O(1)
void moveZeroes(vector<int>& nums) {
       int cnt=0;
       for(int i=0; i<nums.size(); i++){if(nums[i]==0){cnt++;}}
       for(int i=0; i<nums.size(); i++){
           if(nums[i]==0){
               cnt--;
               nums.erase(nums.begin()+i);
               nums.push_back(0);
               i--;
           }
           if(cnt==0){
               break;
            }
       }
    }

int main()
{
    vector<int> nums{0,2, 7, 0, 11, 15};
    moveZeroes(nums);
    for(auto i:nums){
        cout<<i<<" ";
    }
    return 0;
}
