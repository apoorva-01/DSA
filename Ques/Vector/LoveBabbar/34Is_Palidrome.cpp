#include <bits/stdc++.h>
using namespace std;

int isPalindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;
    while (l < h)
    {
        if (str[l] != str[h])
        {
            printf("%s is not a palindrome\n", str);
            return 0;
        }
        l++;
        h--;
    }
    return 1;
    printf("%s is a palindrome\n", str);
}

int isPalinArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int ans = isPalindrome(arr[i]);
        if (ans == 0)
        {
            return 0;
        }
        return isPalindrome(arr[i]);
    }
}

int main()
{
    int arr[] = {'AA','GEEKS','APOO'};
    // length of array
    int n = sizeof(arr) / sizeof(arr[0]);
    int res = isPalinArray(arr, n);

    return 0;
}
