/*
 * problem-url: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P */

#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    int first_digit = x / 1000;
    
    //* even and odd print based on first digit
    if (first_digit % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}