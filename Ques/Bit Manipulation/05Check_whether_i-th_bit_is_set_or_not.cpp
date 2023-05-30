#include <bits/stdc++.h>
using namespace std;


// Time Complexity O(1)
// Space Complexity O(1)
int setOrNot(int n,int k){
    if(n & 1<<k){
        return 1;
    }
    return 0;
}


int main()
{
    int n = 5, k = 1;
    cout<<setOrNot(n,k)<<endl;
	return 0;
}
