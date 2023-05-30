#include <bits/stdc++.h>
using namespace std;


// Time Complexity O(1)
// Space Complexity O(1)
int setBit(int &n,int i){
   n=n | 1<<i;
   return n;
}
int clearBit(int &n,int i){
   n=n & ~(1<<i);
   return n;
}
int toggleBit(int &n,int i){
   n=n ^ 1<<i;
   return n;
}


int main()
{
    int n = 5, i = 1;
    cout<<setBit(n,i)<<endl;
    cout<<clearBit(n,i)<<endl;
    cout<<toggleBit(n,i)<<endl;
    cout<<toggleBit(n,i)<<endl;
	return 0;
}
