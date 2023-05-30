#include <bits/stdc++.h>
using namespace std;
// Que ---https://leetcode.com/problems/rotate-string/solutions/


// Ans----
// If B can be found in (A + A) than B can be rotated to A.
// For example, with A = "abcde", B = "cdeab", we have
//     “abcdeabcde” (A + A)
//     “cdeab” (B)
// B is found in (A + A), so B is a rotated string of A.

bool rotateString(string s, string goal) {
        return s.size() == goal.size() && (s + s).find(goal) != string::npos;
    }

int main()
{
    string str1 = "AACD";
    string str2 = "ACDA";

    if (rotateString(str1, str2))
        cout<<"Strings are rotations of each other"<<endl;
    else
        cout<<"Strings are not rotations of each other"<<endl;

    return 0;
}
