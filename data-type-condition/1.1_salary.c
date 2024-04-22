/*
* problem_url: https://www.hackerrank.com/contests/eid-vacation-practice-a-introduction-to-c-programming-a-batch-5/challenges/income-1-1
*/

#include <stdio.h>
int main()
{
    int X;
    scanf("%d", &X);

    long long int income = (long long int)X * 365;
    
    printf("%lld\n", income);
    return 0;
}