/*
 * problem_url: https://codeforces.com/group/MWSdmqGsZm/contest/219158/problem/Z */

#include <stdio.h>
#include <math.h>
int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    //* calculate the value of ab and cd
    long long int ab = pow(a, b);
    long long int cd = pow(c, d);

    //* compare the values of ab and cd
    if (ab > cd)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}