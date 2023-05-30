#include <bits/stdc++.h>
using namespace std;

// Ans---https://leetcode.com/problems/subarray-sum-equals-k/solutions/1759909/c-full-explained-every-step-w-dry-run-o-n-2-o-n-two-approaches/

int subArraySum(vector<int> nums, int k)
{
    int ans=0;
    int pre[nums.size()];
    pre[0]=nums[0];
    for(int i=1;i<nums.size();i++){
        pre[i]=pre[i-1]+nums[i];
    }
    unordered_map<int,int> mp;
    for(int i = 0; i < nums.size(); i++){
        if(pre[i]==k){
            ans++;
        }
        if(mp.find(pre[i]-k)!=mp.end()){
            ans += mp[pre[i] - k];
        }
        mp[pre[i]]++;
    }
    return ans;
}


int brute(vector<int> nums, int k)
{
    int ans = 0; // ans variable to store our count

    for (int i = 0; i < nums.size(); i++) // traverse from the array
    {
        int sum = nums[i]; // provide sum with nums[i]

        if (sum == k) // if element itself equal to k, then also increment count
            ans++;

        for (int j = i + 1; j < nums.size(); j++) // now moving forward,
        {
            sum += nums[j]; // add elements with sum

            if (sum == k) // if at any point they become equal to k
                ans++;    // increment answer
        }
    }
    return ans;
}

int main()
{
    vector<int> nums{1,1,1};
    int sum = 2;
    cout<<subArraySum(nums, sum)<<endl;
    cout<<brute(nums, sum)<<endl;
    return 0;
}
