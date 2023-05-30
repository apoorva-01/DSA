#include <bits/stdc++.h>
using namespace std;

// Que https://leetcode.com/problems/first-bad-version/

int pivotIndex(vector<int>& nums) {
    // rightSum store sum of numbers to the index's right...
    int rightSum = accumulate(nums.begin(), nums.end(), 0);
    // leftSum store sum of numbers to the index's left
    int leftSum = 0;
    
    for (int i = 0; i < nums.size(); i++) {
        // subtract current elements with from rightSum...
        rightSum -= nums[i];
        // If the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right...
        if (leftSum == rightSum)
            return i;     // Return the pivot index...
        // add current elements with leftSum...
        leftSum += nums[i];
    }
    return -1; 
}

// Time Complexity O(n^2)
// Space Complexity O(n)
// BruteForce---186 / 745 testcases passed
int brute(vector<int>& nums) {
    for(int i=0;i<nums.size();i++){
        int leftSum,rightSum;
        for(int j=0;j<i;j++){
            leftSum+=nums[j];
        }
        for(int j=1+1;j<nums.size();j++){
            rightSum+=nums[j];
        }
        if(leftSum==rightSum){
            return i;
        }
    }
    return -1;
}


int main()
{
    vector<int>nums{1,7,3,6,5,6};
    cout<<pivotIndex(nums)<<endl;
    cout<<brute(nums)<<endl; // 186 / 745 testcases passed
    return 0;
}
