//* https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P

#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d", &n);

    k = n;
    for (int i = 1; i <= n; i++)
    {
        //* specific work in every single line
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        printf("\n");
        k--;
    }

    return 0;
}