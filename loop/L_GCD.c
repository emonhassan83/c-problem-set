/*
 * problem-url: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L

 * Note: Implements the Euclidean algorithm for finding the greatest common divisor (GCD), explanation: https://www.shiksha.com/online-courses/articles/euclidean-algorithm/
 */

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    //* Euclidean algorithm implement by while loop
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("%d\n", a);
    return 0;
}