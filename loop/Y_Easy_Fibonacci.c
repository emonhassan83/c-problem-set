/*
* url: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y

* theory: Fn = Fn-1 + Fn-2
*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a = 0, b = 1, next_num;
    //* print the first N numbers of the Fibonacci sequence
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);

        next_num = a + b;
        a = b;
        b = next_num;
    }

    return 0;
}