#include<bits/stdc++.h>
using namespace std;

// A duplicate removal consists of choosing two adjacent and equal letters and removing them.
// We repeatedly make duplicate removals on s until we no longer can.
// Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

// Input: s = "abbaca"
// Output: "ca"

string removeDuplicates(string s)
{
    string str;
    for(auto c:s){
        if(str.size() && c==str.back()){
            str.pop_back();
        }
        else{
            str.push_back(c);
        }
    }
    return str;
    // Iterate characters of S one by one.
    
    // If the next character is same as the last character in res,
    // pop the last character from res.
    // In this way, we remove a pair of adjacent duplicates characters.
    
    // If the next character is different,
    // we append it to the end of res.
}


int main()
{
    string s="abbaca";
    
    cout<<removeDuplicates(s);
    return 0;
}
