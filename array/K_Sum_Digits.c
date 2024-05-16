/*
 * url: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K */

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    //* take string array input
    char arr[n + 1];
    scanf("%s", arr);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i] - '0'; //* convert to number and sum of elements
    }

    printf("%d", sum);
    return 0;
}