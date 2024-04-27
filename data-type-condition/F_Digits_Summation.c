/*
* problem-url: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F
 */

#include <stdio.h>
int main()
{
    long long int m, n;
    scanf("%lld %lld", &m, &n);

    int num1_last_digit = m%10;
    int num2_last_digit = n%10;

    int sum_last_digit = num1_last_digit + num2_last_digit;

    printf("%d", sum_last_digit);
    return 0;
}