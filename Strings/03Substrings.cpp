#include <bits/stdc++.h> 
using namespace std;
// A subarray or substring will always be contiguous, but a subsequence need not be contiguous. 
// But we can say that both contiguous subsequence and subarray are the same.

// https://www.geeksforgeeks.org/substring-in-cpp/


void allSubStrings(string s)
{	// Pick starting point in outer loop
    // and lengths of different strings for a given starting point
    for (int i = 0; i < s.size(); i++){
		for (int len = 1; len <= s.size() - i; len++){
			cout << s.substr(i, len) << endl;
		}
	}
}

int main()
{
	string str="Apoorva";

	cout << "The initial string is : ";
	cout << str << endl;

	cout << "Reversed string is : ";
	reverse(str.begin(),str.end());
	cout << str << endl;

    cout << "str.substr(2, 2) : ";
	cout << str.substr(2, 2) << endl;
   
    cout << "str.substr(2) : ";
	cout << str.substr(2) << endl;

    cout << "str.substr(0) : ";
	cout << str.substr(0) << endl;
  
    string s = "dog:cat";
    int pos = s.find(":");
	// get a sub-string after a character
    cout << "String is: " <<s.substr(pos + 1)<<endl;
	// get a sub-string before a character
    cout << "String is: " <<s.substr(0 , pos)<<endl;
  
    cout << "All Substrings are: " <<endl;
	allSubStrings("abcd");

    
	return 0;
}
