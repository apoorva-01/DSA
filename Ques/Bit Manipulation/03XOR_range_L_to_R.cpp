#include <bits/stdc++.h>
using namespace std;


// Time Complexity O(1)
// Space Complexity O(1)
int findXOR(int n){
    if(n%4==0){
        return n;
    }
    else if(n%4==1){
        return 1;
    }
    else if(n%4==2){
        return n+1;
    }
    else if(n%4==3){
        return 0;
    }
}

int xo(int h, int l){
    return findXOR(h)-findXOR(l-1);
}

int main()
{
    cout<<xo(6,3)<<endl;
	return 0;
}
