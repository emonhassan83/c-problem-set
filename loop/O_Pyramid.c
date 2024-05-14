/*
 * problem-url: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/O */

#include <stdio.h>
int main()
{
    int n, k = 1;
    scanf("%d", &n);

    // *here n means line and k means star count 
    for (int i = 1; i <= n; i++)
    {
        //* specific work in every single line
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        printf("\n");
        k++;
    }

    return 0;
}