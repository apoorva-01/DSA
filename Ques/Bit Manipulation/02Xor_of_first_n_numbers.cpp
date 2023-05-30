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
// Time Complexity O(n)
// Space Complexity O(1)
int findXORLinear(int n){
    int xo=0;
    for(int i=1;i<=n;i++){
        xo^=i;
    }
    return xo;
}

int main()
{

    cout<<"O(1)"<<endl;
	
    cout<<"Xor of first 1 numbers "<<findXOR(1)<<endl;
    cout<<"Xor of first 2 numbers "<<findXOR(2)<<endl;
    cout<<"Xor of first 3 numbers "<<findXOR(3)<<endl;
    cout<<"Xor of first 4 numbers "<<findXOR(4)<<endl;
    cout<<"Xor of first 5 numbers "<<findXOR(5)<<endl;
    cout<<"Xor of first 6 numbers "<<findXOR(6)<<endl;
    cout<<"Xor of first 7 numbers "<<findXOR(7)<<endl;
    cout<<"Xor of first 8 numbers "<<findXOR(8)<<endl;
    cout<<"Xor of first 9 numbers "<<findXOR(9)<<endl;

    cout<<"O(n)"<<endl;

    cout<<"Xor of first 1 numbers "<<findXORLinear(1)<<endl;
    cout<<"Xor of first 2 numbers "<<findXORLinear(2)<<endl;
    cout<<"Xor of first 3 numbers "<<findXORLinear(3)<<endl;
    cout<<"Xor of first 4 numbers "<<findXORLinear(4)<<endl;
    cout<<"Xor of first 5 numbers "<<findXORLinear(5)<<endl;
    cout<<"Xor of first 6 numbers "<<findXORLinear(6)<<endl;
    cout<<"Xor of first 7 numbers "<<findXORLinear(7)<<endl;
    cout<<"Xor of first 8 numbers "<<findXORLinear(8)<<endl;
    cout<<"Xor of first 9 numbers "<<findXORLinear(9)<<endl;
	return 0;
}
