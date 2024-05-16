//* https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W
//! TODO
#include <stdio.h>
int main()
{
    int n, s, k;
    scanf("%d", &n);

    s = n - 1;
    k = 1;

    //* here total line number 2n - 1 --> here i is indicate line
    for (int i = 1; i <= (n * 2); i++)
    {
        //* printing s number space
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        //* printing k number star(*)
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        //* condition apply for diamond shape
        if (i <= n-1) 
        {
            s--;
            k += 2;
        }
        else
        {
            s++;
            k -= 2;
        }

        //* end of line print enter
        printf("\n");
    }

    return 0;
}