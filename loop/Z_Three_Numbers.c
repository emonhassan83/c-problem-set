//* https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z

#include <stdio.h>
int main()
{
    int k, s;
    scanf("%d %d", &k, &s);

    int count = 0;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            for (int l = 0; l <= k; l++)
            {
                if (i + j + l == s)
                    count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}