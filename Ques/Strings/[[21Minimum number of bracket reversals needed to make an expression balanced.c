#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// first remove all balanced part of expression. For example, convert “}{{}}{{{” to “}{{{” by removing highlighted part. 
// If we take a closer look, we can notice that, after removing balanced part, we always end up with an expression of the form }}…}{{…{, an expression that contains 0 or more number of closing brackets followed by 0 or more numbers of opening brackets. 
// How many minimum reversals are required for an expression of the form “}}..}{{..{” ?. Let m be the total number of closing brackets and n be the number of opening brackets. 
// We need ⌈m/2⌉ + ⌈n/2⌉ reversals. For example }}}}{{ requires 2+1 reversals.
 
int findMinInversions(char exp[])
{
    // if the expression has an odd length, it cannot be balanced
    if (strlen(exp) & 1) {
        return -1;
    }
 
    int inversions = 0;     // stores total inversions needed
    int open = 0;           // stores the total number of opening braces
 
    // traverse the expression
    for (int i = 0; i < strlen(exp); i++)
    {
        // if the current character is an opening brace
        if (exp[i] == '{') {
            open++;
        }
 
        // if the current character is a closing brace
        else {
            // if an opening brace is found before, close it
            if (open) {
                open = open - 1;    // decrement opening brace count
            }
            // invert the closing brace, i.e., change '}' to '{'
            else {
                inversions++;       // increment total inversions needed by 1
                // After Inversion This bracket become open
                open = 1;           // increment opening brace count
            }
        }
    }
 
    // for `n` opened braces, exactly `n/2` inversions are needed
    return inversions + open/2;
}
 
int main()
{
    char exp[] = "{{}{{}{{";
 
    int inv = findMinInversions(exp);
    if (inv != -1) {
        printf("The minimum number of inversions needed is %d",inv);
    }
    else {
        printf("Invalid input");
    }
 
    return 0;
}