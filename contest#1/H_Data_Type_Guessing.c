/*
 * url: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H */

#include <stdio.h>
int main()
{
    long long int n, k, a;
    scanf("%lld %lld %lld", &n, &k, &a);

    double result = (double)n * k / a;

    //* check if the result is an int, long long int or double
    if (result == (int)result)
    {
        printf("int\n");
    }
    else if (result == (long long)result)
    {
        printf("long long\n");
    }
    else
    {
        printf("double\n");
    }

    return 0;
}