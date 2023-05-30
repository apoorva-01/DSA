#include <stdio.h>
#include <string.h>

// Fix a center and expand in both directions for longer palindromes and keep track of the longest palindrome seen so far.

// ALGO:
// Maintain a variable ‘ maxLength = 1 ‘ (for storing LPS length) and ‘ start =0 ‘ (for storing starting index of LPS ).
// The idea is very simple, we will traverse through the entire string with i=0 to i<(length of string).
// while traversing, initialize ‘low‘ and ‘high‘ pointer such that low= i-1 and high= i+1.
// keep incrementing ‘high’ until str[high]==str[i] .
// similarly keep decrementing ‘low’ until str[low]==str[i].
// finally we will keep incrementing ‘high’ and decrementing ‘low’ until str[low]==str[high].
// calculate length=high-low-1, if length > maxLength then maxLength = length and start = low+1 .

void printSubStr(char *str, int low, int high)
{
    for (int i = low; i <= high; ++i)
        printf("%c", str[i]);
}

int longestPalSubstr(char *str)
{
    int n = strlen(str); // calculating size of string
    if (n < 2)
        return n; // if string is empty then size will be 0.
                  // if n==1 then, answer will be 1(single
                  // character will always palindrome)

    int maxLength = 1, start = 0;
    int low, high;
    for (int i = 0; i < n; i++)
    {
        low = i - 1;
        high = i + 1;
        while (high < n && str[high] == str[i]) // increment 'high'
            high++;

        while (low >= 0 && str[low] == str[i]) // decrement 'low'
            low--;

        while (low >= 0 && high < n && str[low] == str[high])
        {
            low--;  // decrement low
            high++; // increment high
        }

        int length = high - low - 1;
        if (maxLength < length)
        {
            maxLength = length;
            start = low + 1;
        }
    }
    printf("Longest palindrome substring is: ");
    printSubStr(str, start, start + maxLength - 1);
    return maxLength;
}

int main()
{
    char str[] = "forgeeksskeegfor";
    printf("\nLength is: %d", longestPalSubstr(str));
    return 0;
}
