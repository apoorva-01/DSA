
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

void reverse(string s)
{
    int f = 0;
    int r = s.size() - 1;

    while (f < r)
    {
        s[f] = s[f] ^ s[r];
        s[r] = s[f] ^ s[r];
        s[f] = s[f] ^ s[r];
        f++;
        r--;
    }
    cout << s << endl;
    return;
}


string reverseUsingStack(string s) {
    stack<char> st;
    for(int i=0;i<s.size();i++){
        st.push(s[i]);
    }
    string rev="";
    for(int i=0;i<s.size();i++){
        rev.push_back(st.top());
        st.pop();
    }
    return rev;
}

int main()
{
    int t;
    cout << "Number of test cases" << endl;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        reverse(str);
        // reverse01(str);
    }
    return 0;
}
