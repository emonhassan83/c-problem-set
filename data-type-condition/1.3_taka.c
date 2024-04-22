/*
 * problem_url: https://www.hackerrank.com/contests/eid-vacation-practice-a-introduction-to-c-programming-a-batch-5/challenges/money-6-1
 */

#include <stdio.h>
int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);

    int Rina = (X - Y) / 2;
    int Mina = X - Rina;

    printf("%d %d", Mina, Rina);
    return 0;
}