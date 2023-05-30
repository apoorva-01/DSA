#include <bits/stdc++.h>
using namespace std;

// Using Bit Manipulation
// Time Complexity O(n)
// Space Complexity O(1)
int singleNumber(vector<int>& nums) {
    int xo=0;
    for(int i:nums){
       xo^=i;
    }
    return xo;
}

// Time Complexity O(n)
// Space Complexity O(n)
int hashSol(vector<int>& nums) {
    map<int,int> mp;
    for(int i:nums){
        mp[i]++;
    }
    for(auto pr:mp){
        if(pr.second==1){
            return pr.first;
        }
    }
}

int main()
{
    vector<int> n{1,2,3,2,4,3,4,1,6};
    cout<<singleNumber(n)<<endl;
    cout<<hashSol(n)<<endl;
	return 0;
}
