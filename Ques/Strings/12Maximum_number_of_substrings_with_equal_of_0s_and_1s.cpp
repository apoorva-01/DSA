#include<bits/stdc++.h>
using namespace std;

int maxSubStr(string str)
{
    int count0 = 0, count1 = 0;
    int cnt = 0; // To store the count of maximum substrings str can be divided into
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '0')
        {
            count0++;
        }
        else if (str[i] == '1')
        {
            count1++;
        }

        if (count0 == count1)
        {
            cnt++;
        }
    }
    // It is not possible to split the string
    if (count0 != count1)
    {
        return -1;
    }

    return cnt;
}

int main()
{
    string str = "0100110101";
    cout<< maxSubStr(str);

    return 0;
}
