/*
 * url: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B */

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    //* take input array with loop
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int x;
    scanf("%d", &x);

    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        //* if match x in it's index in array
        if (ar[i] == x)
        {
            ans = i;
            break;
        }
    }

    printf("%d", ans);
    return 0;
}