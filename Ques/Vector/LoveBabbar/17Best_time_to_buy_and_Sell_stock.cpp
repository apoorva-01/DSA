#include <bits/stdc++.h>
using namespace std;

// Que --- https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
// Ans-- https://youtu.be/34WE6kwq49U


int stock(vector<int> &prices)
{ 
    int minSoFar=prices[0];
    int maxProfit=INT_MIN;
    for(int i=0;i<prices.size();i++){
        if(prices[i]<minSoFar){
            minSoFar=prices[i];
        }
        if(prices[i]-minSoFar>maxProfit){
            maxProfit=prices[i]-minSoFar;
        }
    }
    return maxProfit;
}

int brute(vector<int> &prices)
{ 
    // Bruteforce ------O(n^2)
    // For all possible combination store value of profits in set 
    // and then return the last value in set
    set<int> mp;
    for(auto i:prices){
        for(int j=i;j<prices.size();j++){
            mp.insert(prices[j]-prices[i]);
        }
    }
    
    return *(--mp.end()) ;  // return *mp.rbegin() ;
   
}

int main()
{
    vector<int> nums{7,1,5,3,6,4};
    cout<<stock(nums)<<endl;
    cout<<brute(nums)<<endl;
   
    return 0;
}
