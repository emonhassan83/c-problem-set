/*
 * problem-url: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O */

#include <stdio.h>
int main()
{
    int a, b;
    char s;
    scanf("%d%c%d", &a, &s, &b);

    //* perform the arithmetic operation based on the operator
    int result;
    if (s == '+')
        result = a + b;
    else if (s == '-')
        result = a - b;
    else if (s == '*')
        result = a * b;
    else if (s == '/')
        result = a / b;

    printf("%d", result);

    return 0;
}