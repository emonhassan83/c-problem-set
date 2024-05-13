/*
 * problem-url: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B */

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    //* print even numbers
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            printf("%d\n", i);
    }

    return 0;
}