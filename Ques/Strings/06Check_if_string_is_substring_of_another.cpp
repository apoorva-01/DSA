#include <bits/stdc++.h>
using namespace std;



bool isSubstringSTL(string s1, string s2)
{
    // using find method to check if s1 is a substring of s2
    if (s2.find(s1) != -1){
        return true;
    }
    return false;
}

int main()
{
    string str1 = "AASD";
    string str2 = "AASDQQQ";

    cout<<isSubstringSTL(str1,str2);

    return 0;
}
