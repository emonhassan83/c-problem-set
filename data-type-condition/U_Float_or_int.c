/*
 * problem-url: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U */

#include <stdio.h>
int main()
{
    float n;
    scanf("%f", &n);

    int int_part = (int)n;
    float decimal_part = n - int_part;

    //* check if n is float or integer
    if (decimal_part != 0)
        printf("float %d %.3f\n", int_part, decimal_part);
    else
        printf("int %d\n", int_part);

    return 0;
}