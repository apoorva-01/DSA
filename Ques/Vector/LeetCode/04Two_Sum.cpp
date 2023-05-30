
#include <bits/stdc++.h>
using namespace std;
// Que----- https://leetcode.com/problems/two-sum/

void twoSum(vector<int> &nums, int target)
{
    vector<int> res;
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        if (mp.find(target - nums[i]) != mp.end())
        {
            auto k = mp.find(target - nums[i]);
            res.push_back(i);
            res.push_back(k->second);
        }
        else
        {
            mp[nums[i]] = i;
        }
    }
    for (auto j : res)
    {
        cout << j << " ";
    }
    cout<<endl;
    return;
}
// Bruteforce Approach---- Accepted
void twoSumBrute(vector<int> &nums, int target)
{
    vector<int> res;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target && i != j)
            {
                res.push_back(i);
                res.push_back(j);
                for (auto j : res)
                {
                    cout << j << " ";
                }
                cout<<endl;
                return;
            }
        }
    }
    for (auto j : res)
    {
        cout << j << " ";
    }
    cout<<endl;
    return;
};
//  vector<int> myWrongApproach(vector<int> &nums, int target)
// {
// Sorting & Two pointer---We have to return indexes but we have sorted the vector hence indexes are changed
// sort(nums.begin(), nums.end());
//  vector<int> res;
//  int f=0;
//  int r=nums.size()-1;
//  while(f<r){
//      if(nums[f]+nums[r]>target){
//          r--;
//      }
//      else if(nums[f]+nums[r]<target){
//          f++;
//      }
//      else{
//           res.push_back(f);
//           res.push_back(r);
//          return res;
//      }
//  }
//  return res;
// };

int main()
{
    vector<int> nums{2, 7, 11, 15};
    twoSum(nums, 9);
    twoSumBrute(nums, 9);
    return 0;
}
