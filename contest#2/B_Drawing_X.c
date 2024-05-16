/*
 * url: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/B*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            //* center of the grid
            if (i == j && i == n / 2)
                printf("X");
            //* backslash diagonal
            else if (i == j)
                printf("\\");
            //* slash diagonal
            else if (i + j == n - 1)
                printf("/");
            //* other positions
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}
