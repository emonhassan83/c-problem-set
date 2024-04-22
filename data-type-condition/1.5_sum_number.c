/*
 * problem_url: https://www.hackerrank.com/contests/eid-vacation-practice-a-introduction-to-c-programming-a-batch-5/challenges/1-to-n-4-2
 */

#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int sum = n * (n + 1) / 2;
    printf("%lld\n", sum);
    return 0;
}