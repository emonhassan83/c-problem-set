/*
 * url: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E  */

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    if (a < b)
    {

        //* interval with a odd numbers and b even numbers
        if ((a % 2 == 1 && b % 2 == 0) || (a % 2 == 0 && b % 2 == 1))
        {
            printf("YES\n");
        }
    } else if (a> b)
    {
       printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return 0;
}