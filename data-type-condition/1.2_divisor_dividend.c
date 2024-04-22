/*
 * problem_url: https://www.hackerrank.com/contests/eid-vacation-practice-a-introduction-to-c-programming-a-batch-5/challenges/divisor-dividend
 
 * Formula: Divisor = Dividend − Remainder / Quotient
 */

#include <stdio.h>
int main()
{
    int D, Q, R;
    scanf("%d %d %d", &D, &Q, &R);

    int divisor = (D - R) / Q;

    printf("%d\n", divisor);
    return 0;
}