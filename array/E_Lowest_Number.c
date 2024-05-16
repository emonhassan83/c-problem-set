/*
* url: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E */

#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);

    //* take input array with loop
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //* print lowest element in array and it's index
    int min = INT_MAX, pos;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            pos = i + 1;
        }
    }

    printf("%d %d", min, pos);
    return 0;
}