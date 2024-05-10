/*
 * problem-url: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N */

#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);

    //* check if x is a capital letter
    if (x >= 65 && x <= 90)
    {
        x = x + 32;
    }
    //* if X is not a capital letter, it must be a small letter
    else
    {
        x = x - 32;
    }
    printf("%c", x);

    return 0;
}