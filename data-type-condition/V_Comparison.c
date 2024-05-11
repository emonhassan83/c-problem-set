/*
 * problem-url: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V */

#include <stdio.h>
int main()
{
    int a, b;
    char s;

    scanf("%d %c %d", &a, &s, &b);

    //* flag on and comparison based on the comparison symbol
    int is_right = 0;
    if (s == '<')
    {
        if (a < b)
            is_right = 1;
    }
    else if (s == '>')
    {
        if (a > b)
            is_right = 1;
    }
    else if (s == '=')
    {
        if (a == b)
            is_right = 1;
    }

    if (is_right)
        printf("Right\n");
    else
        printf("Wrong\n");

    return 0;
}