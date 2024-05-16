/*
* url: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C */

#include <stdio.h>
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

    //* set positive number by 1 and negative number by 2.
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            arr[i] = 1;
        }
        else if (arr[i] < 0)
        {
            arr[i] = 2;
        }
        printf("%d ", arr[i]);
    }

    return 0;
}