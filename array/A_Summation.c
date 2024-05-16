/*
* url: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);

    //* take array input
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &arr[i]);
    }

    //*  same array elemets
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    
    printf("%d\n", labs(sum));
    return 0;
}