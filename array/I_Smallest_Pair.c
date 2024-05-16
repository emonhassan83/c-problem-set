/*
 * url: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I */

#include <stdio.h>
#include <limits.h>
int main()
{
    int test;
    scanf("%d", &test);

    while (test--)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int minSum = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                //* calculate the sum for the current (i, j) pair
                int sum = arr[i] + arr[j] + j - i;
                //* set minSum if the current sum is smaller
                if (sum < minSum)
                {
                    minSum = sum;
                }
            }
        }
        printf("%d\n", minSum);
    }

    return 0;
}