//* https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T

#include <stdio.h>
int main()
{
    int n, s, k;
    scanf("%d", &n);

    s = n - 1;
    k = 1;
    //* here n means line
    for (int i = 1; i <= n; i++)
    {
        //* s means space count
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        //* k means star count
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        s--;
        k += 2;
        printf("\n");
    }

    return 0;
}