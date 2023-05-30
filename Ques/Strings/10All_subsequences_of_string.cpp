#include<bits/stdc++.h>
using namespace std;

// A String is a subsequence of a given String, that is generated by deleting some character of a given string without changing its order.
// Sum of all substrings of a string representing a number
// But we can say that both contiguous subsequence and subarray are the same.

void pickDontPick(string input, string output)
{
    // Base Case
    // if the input is empty print the output string
    if (input.empty()) {
        cout << output << endl;
        return;
    }
 
    // output is passed with including
    // the Ist character of
    // Input string
    pickDontPick(input.substr(1), output + input[0]);
 
    // output is passed without
    // including the Ist character
    // of Input string
    pickDontPick(input.substr(1), output);
}



   
int main()  
{  
    string str="abcd";
    pickDontPick(str,"");
    return 0;  
}  