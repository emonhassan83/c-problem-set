/*
* url: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D

* Sum(1,n)= n×(n+1) /2 
* Sum(L,R)=Sum(1,R)−Sum(1,L−1) */

#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);

    while (test--)
    {
        long long l, r;
        scanf("%lld %lld", &l, &r);

        //* sum of first R numbers
        long long sumR = (r * (r + 1)) / 2;

        //* sum of first (L-1) numbers
        long long sumL = ((l - 1) * l) / 2;

        //* sum of numbers between L and R
        long long result = sumR - sumL;

        printf("%lld\n", result);
    }

    return 0;
}
