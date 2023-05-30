#include<bits/stdc++.h>
using namespace std;

void printDuplicates(string str)
{
    map<char, int> count;
    for (int i = 0; i < str.length(); i++) {
        count[str[i]]++;
    }
 
    for (auto it : count) {
        if (it.second > 1)
            cout << it.first << ", count = " << it.second<< endl;
    }
}


int main()
{
    string s="ooHelloeeHh";
    
    printDuplicates(s);
    return 0;
}
