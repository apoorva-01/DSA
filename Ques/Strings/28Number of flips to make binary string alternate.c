// https://www.youtube.com/watch?v=MOeuK6gaC2A
#include <stdio.h>
#include <string.h>
#define MIN(x, y) (y < x) ? y : x

// We will loop over all characters of given string, if current character is expected character according to alternation then we will do nothing otherwise we will increase flip count by 1. 
// After trying strings starting with 0 and starting with 1, we will choose the string with minimum flip count. 

char flip(char ch) { return (ch == '0') ? '1' : '0'; }

// To get minimum flips when
// alternate string starts with expected char
int getFlipWithStartingCharcter(char str[], char expected)
{
    int flipCount = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        // if current character is not expected,
        // increase flip count
        if (str[i] != expected){
             flipCount++;
        }

        // flip expected character each time
        expected = flip(expected);
    }
    return flipCount;
}


int main()
{
    char str[] = "0001010111";
    
    printf("Min Number of Flips: %d", MIN(getFlipWithStartingCharcter(str, '0'),getFlipWithStartingCharcter(str, '1')));
    return 0;
}

