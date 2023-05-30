#include <bits/stdc++.h>
using namespace std;

// Time Complexity O(n)
// Space Complexity O(1)
int binary(vector<int> arr)
{
    int l,m=0;
    int h=arr.size()-1;
    while(l<=h)
    {
        m=(l+h)/2;
        if(arr[m]==m)
            return m;
        else if(arr[m]<m)
            l=m+1;
        else
            h=m-1;
    }
    return -1;

}


// Time Complexity O(n)
// Space Complexity O(1)
int linearSearch(vector<int> arr)
{
    for (int i = 0; i <arr.size(); i++)
    {
        if (arr[i] == i)
            return i;
    }
    return -1;
}

int main()
{
    vector<int> arr{-10, -1, 0, 3, 10, 11, 30, 50, 100};
    cout << "Fixed Point is " << linearSearch(arr);
    // cout << "Fixed Point is " << binary(arr);
    return 0;
}
