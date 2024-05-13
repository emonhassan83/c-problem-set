/*
 * problem_url: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B */

#include <stdio.h>
int main()
{
    long long a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);

    //* if both a and b are divisible by k
    if (a % k == 0 && b % k == 0)
        printf("Both\n");
    //* if only a is divisible by k
    else if (a % k == 0)
        printf("Memo\n");
    //* if only b is divisible by k
    else if (b % k == 0)
        printf("Momo\n");
    //* a nor b is divisible by k
    else
        printf("No One\n");

    return 0;
}
