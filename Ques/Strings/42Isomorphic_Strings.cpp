#include <bits/stdc++.h>
using namespace std;

// Que https://leetcode.com/problems/isomorphic-strings
// Ans https://youtu.be/6Qkail843d8

// two different letter are assigned similar frequency/value.
// While iterations if the same letter is encounter with different assignes frequency/value then FALSE is returned.
// Otherwise the s & t are isomorphoic and TRUE is returned.

void display(unordered_map<char, char> mp)
{
    for(auto &pr:mp){
        cout << '\t' << pr.first << '\t' << pr.second<< '\n';
    }
     cout<<endl;
}


bool areIsomorphic(string str1, string str2)
{
    if(str1.size()!=str2.size()){
        return false;
    }
    unordered_map <char,char> mp1;
    unordered_map <char,bool> mp2;
    for(int i=0;i<str1.size();i++){
        // If different values are assigned previously
        if(mp1.find(str1[i])!=mp1.end()){
            if(mp1[str1[i]]!=str2[i]){
                return false;
            }
        } 
        else{
            if(mp2.find(str2[i])!=mp2.end()){
                return false;
            }
            else{
                mp1[str1[i]]=str2[i];
                mp2[str2[i]]=true;
            }
        }
           

    }
    return true;
}

int main()
{

    cout<<"Is Isomorphic: "<<areIsomorphic("egg", "dff")<<endl;
    cout<<"Is Isomorphic: "<<areIsomorphic("egt", "dff")<<endl;
    return 0;
}