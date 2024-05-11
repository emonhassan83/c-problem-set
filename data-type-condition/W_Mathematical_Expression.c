/*
 * problem_url: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W */

#include <stdio.h>
int main()
{
    int a, b, c;
    char s, q;

    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);

    //* expression based on the operator
    int result;
    if (s == '+')
        result = a + b;
    else if (s == '-')
        result = a - b;
    else if (s == '*')
        result = a * b;

    //* condition apply
    if (result == c)
        printf("Yes\n");
    else
        printf("%d\n", result);

    return 0;
}