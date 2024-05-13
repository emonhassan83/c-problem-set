/*
 * problem-url: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G */

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int t;
        scanf("%d", &t);

        //* handle edge cases
        if (t == 0 || t == 1)
        {
            printf("1\n");
            continue;
        }

        //* calculate factorial using long long int to handle larger values
        long long int factorial = 1;
        for (int i = t; i > 0; i--)
        {
            factorial *= i;
        }
        printf("%lld\n", factorial);
    }

    return 0;
}