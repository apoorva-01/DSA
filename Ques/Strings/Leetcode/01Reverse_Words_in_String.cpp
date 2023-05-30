
#include <bits/stdc++.h>
using namespace std;

void reverse01(string str)
{
    string rev_str;
    for (int i = str.size(); i >= 0; i--)
    {
        rev_str.push_back(str[i]);
        // push_back() time complexity is O(1)
    }
    cout << rev_str << endl;
    return;
}

string reverseWords(string s) {
    int start = 0;
    for(int i=0;i<s.size();i++) {
    // For loop will reverse all words expect the last one
        if(s[i] == ' ') {
            reverse(s.begin()+start, s.begin()+i);
            start = i + 1;
        }
    }
    reverse(s.begin()+start,s.end());
    return s;
}

int main()
{
    string str="Let's take LeetCode contest";
    cout<<reverseWords(str);
    return 0;
}
