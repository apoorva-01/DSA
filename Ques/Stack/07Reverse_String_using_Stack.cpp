#include <bits/stdc++.h>
using namespace std;


string reverse(string s) {
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


int main(){
    string str="abcd";
    cout<<reverse(str)<<endl;
    return 0;
}