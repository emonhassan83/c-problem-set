/*
 * problem_url: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y */

#include <stdio.h>
int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    long long int mult = a * b * c * d;

    long long int last_two_digit = mult % 100;

    printf("%02lld\n", last_two_digit);

    return 0;
}