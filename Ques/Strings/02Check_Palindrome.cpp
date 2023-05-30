#include<bits/stdc++.h>
using namespace std;

void isPalindromeUsingReverse(string str)
// By Reversing
{
    string rev_str;
    for (int i = str.size(); i >= 0; i--)
    {
        rev_str.push_back(str[i]);
        // push_back() time complexity is O(1)
    }
    if(rev_str == str){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}

void isPalindrome(string str)
{
     for (int i = 0; i <=str.size()/2; i++)
        {
           if(str[i]!=str[str.size()-1-i]){
                cout<<"No"<<endl;
                return;
           }
        }

    cout<<"Yes"<<endl;
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
        // isPalindromeUsingReverse(str);
        isPalindrome(str);
    }
    return 0;
}
