//* https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R

#include <stdio.h>
int main()
{
    int n, m;
    //* read pairs of numbers until either N or M becomes less than or equal to zero
    while (1)
    {
        scanf("%d %d", &n, &m);

        //* check if N or M is less than or equal to zero
        if (n <= 0 || m <= 0)
            break;

        //* print the numbers between N and M for condition
        if (n <= m)
        {
            for (int i = n; i <= m; i++)
            {
                printf("%d ", i);
            }
        }
        else
        {
            for (int i = m; i <= n; i++)
            {
                printf("%d ", i);
            }
        }

        //* print the message "sum ="
        printf("sum =");

        //* calculate the sum of the numbers between N and M
        int sum = 0;
        if (n <= m)
        {
            for (int i = n; i <= m; i++)
            {
                sum += i;
            }
        }
        else
        {
            for (int i = m; i <= n; i++)
            {
                sum += i;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}