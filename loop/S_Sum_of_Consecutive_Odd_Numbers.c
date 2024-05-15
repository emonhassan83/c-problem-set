//* https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S

#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);

    while (test--)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        //* find odd numbers sum based on condition
        int sum = 0;
        if (x <= y)
        {
            for (int i = x + 1; i < y; i++)
            {
                if (i % 2 != 0)
                    sum += i;
            }
        }
        else
        {
            for (int i = y + 1; i < x; i++)
            {
                if (i % 2 != 0)
                    sum += i;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}