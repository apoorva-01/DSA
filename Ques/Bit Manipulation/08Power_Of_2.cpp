#include <bits/stdc++.h>
using namespace std;

// Time Complexity O(1)
// Space Complexity O(1)
bool powerOf2(int &n){
    if(n<=0){return false;}
   if((n & (n-1))==0){
    cout<<"Power of 2";
    return true;
   }
   cout<<"Not Power of 2";
   return false;
}


int main()
{
    int n = 8;
    cout<<powerOf2(n);
	return 0;
}
