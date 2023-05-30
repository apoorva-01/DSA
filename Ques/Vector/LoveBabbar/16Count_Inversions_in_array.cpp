
#include <bits/stdc++.h>
using namespace std;


// 1) Create empty Set and insert first element of array into the set.
// 2) Initialize inversion count as 0.
// 3) Iterate from 1 to n-1 and do following for every element in arr[i]
//      a) Insert arr[i] into the set.
//      b) Find the first element greater than arr[i] in set using upper_bound() defined Set STL.
//      c) Find distance of above found element from last element in set and add this distance to inversion count.
// 4) Return inversion count.

int getInvCount(vector<int> nums)
{
    set<int> s;
    int inv_count = 0;
    for(int i=0;i<nums.size();i++){
        s.insert(nums[i]);
        auto it=upper_bound(s.begin(),s.end(),nums[i]);
        inv_count += distance(it, s.end());
    }
    return inv_count;
}


// Bruteforce:O(N^2)
// Traverse through the array from start to end
// For every element, find the count of elements smaller than the current number up to that index using another loop.
// Sum up the count of inversion for every index.
// Print the count of inversions.
int brute(vector<int> nums)
{
    int inv_count = 0;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]>nums[j]){
                inv_count++;
            }
        }
    }
    return inv_count;
}

int main()
{
    vector<int> nums{2, 4, 1, 3, 5};
    cout<<" Number of inversions are "<<getInvCount(nums)<<endl;
    cout<<" Number of inversions are "<<brute(nums)<<endl;
    return 0;
}
