#include <bits/stdc++.h>
using namespace std;


// Time Complexity O(1)
// Space Complexity O(1)
void oddEven(int n){
    if(n&1==0){
        cout<<n<<" Even";
        return;
    }
    cout<<n<<" Odd";
}



int main()
{
    oddEven(6);
    oddEven(3);
	return 0;
}
