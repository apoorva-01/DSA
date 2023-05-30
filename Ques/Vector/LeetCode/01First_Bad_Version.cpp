#include <bits/stdc++.h>
using namespace std;

// Que https://leetcode.com/problems/first-bad-version/

int firstBadVersion(int n) {
    int l=1;
    int m;
    int h=n;
    while(l<h){
        m = l + (h - l) / 2;
        if(isBadVersion(m)){
            h=m;
        }
        else{
            l=m+1;
        }
    }
    return l;
    }


int main()
{
    
    cout<<pivotIndex(5)<<endl;
    cout<<brute(5)<<endl;
    return 0;
}
