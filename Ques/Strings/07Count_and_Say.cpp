#include <bits/stdc++.h>
using namespace std;

string generator(string str)
{
    string ans = "";
    unordered_map<char, int> mp; // It is used to count integer sequence

    for (int i = 0; i < str.length() + 1; i++) {
        // when current char is different from prev one we
        // clear the map and update the ans
        if (mp.find(str[i]) == mp.end() && i > 0) {
            auto prev = mp.find(str[i - 1]);
            ans += to_string(prev->second) + prev->first;
            mp.clear();
        }
        // when current char is same as prev one we increase
        // it's count value
        mp[str[i]]++;
    }
    return ans;
}

string countAndSay(int n)
{
    string res = "1"; // res variable keep tracks of string from 1 to n-1
    // For loop iterates for n-1 time and generate strings
    // in sequence "1" -> "11" -> "21" -> "1211"
    for (int i = 1; i < n; i++) {
        res = generator(res);
    }
    return res;
}


string readAndSay(int n) 
{
   if(n==1){return "1";}
   if(n==2){return "11";}
   string s="11";
   for(int i=3;i<=n;i++){
       string t="";
       s+='&';
       int cnt=1;
       for(int j=1;j<s.size();j++){
           if(s[j]==s[j-1]){
               cnt++;
           }
           else{
               t+=to_string(cnt);
               t+=s[j-1];
               cnt=1;
           }
       }
       s=t;
   }
   return s;
}

int main()
{
    cout<<countAndSay(4)<<endl;
    cout<<readAndSay(4)<<endl;

    return 0;
}
