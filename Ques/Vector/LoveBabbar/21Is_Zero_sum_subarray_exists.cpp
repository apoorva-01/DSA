#include <bits/stdc++.h>
using namespace std;
// Que--- Find if there is a subarray with 0 sum using hashing: 


// Hashing--- https://youtu.be/5g03Ydcwseg
// The idea is to iterate through the array and for every element arr[i]
// Calculate the sum of elements from 0 to i (this can mainly be done as sum += arr[i]). 
// If the current sum has been seen before, then there is a zero-sum array. 
// Hashing is used to store the sum values so that sum can be stored quickly and find out whether the current sum is seen before or not

void zeroSum(vector<int> nums)
{
    unordered_set<int> s;
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum==0 || s.find(sum)!= s.end()){
            cout<<"Yes";
            return;
        }
        s.insert(sum);
    }
    
    cout<<"No";
}

int main()
{
	vector<int> nums{ 1, 4, -2, -2, 5, -4, 3};
	zeroSum(nums);
	return 0;
}

