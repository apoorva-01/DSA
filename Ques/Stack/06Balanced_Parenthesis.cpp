#include <bits/stdc++.h>
using namespace std;


bool isValid(string s) {
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            st.push(s[i]);
        }
        else if(st.size()>0 && s[i]==')'&& st.top()!='(')return false;
        else if(st.size()>0 && s[i]=='}'&& st.top()!='{')return false;
        else if(st.size()>0 && s[i]==']'&& st.top()!='[')return false;
        else if(st.empty())return false;
        else if(!st.empty()){
            st.pop();
        };
    }
    if(!st.empty())return false;
    return true;
}


int main(){
    string str="()[]{}";
    cout<<isValid(str)<<endl;
    return 0;
}