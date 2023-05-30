#include <bits/stdc++.h>
using namespace std;


// Time Complexity O(1)
// Space Complexity O(1)
int removeLastSetBit(int &n,int i){
   n=n & (n-1);
   return n;
}


int main()
{
    int n = 5, i = 1;
    cout<<removeLastSetBit(n,i)<<endl;
	return 0;
}
