#include <stdio.h>

int findprefix(const char *str1, const char *str2)
{
    int n = 0;

    for (; *str1 && (*str1 == *str2); ++str1, ++str2)
    {
        ++n;
    }

    return n;
}

int main(void)
{
    const char *str1 = "Hello Word!";
    const char *str2 = "Hello Kallum Smith";

    int n = findprefix(str1, str2);

    if (n != 0)
        printf("\"%.*s\"\n", (int)n, str1);

    return 0;
}