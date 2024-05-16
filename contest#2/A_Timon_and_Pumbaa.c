/*
* url: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A */

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    //* subtraction two int value if neg set value 0
    int sub = a - b;
    if (sub < 0)
    {
        sub = 0;
    }
    printf("%d", sub);

    return 0;
}