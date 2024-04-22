/*
 * problem_url: https://www.hackerrank.com/contests/eid-vacation-practice-a-introduction-to-c-programming-a-batch-5/challenges/father-and-daughter
 */

#include <stdio.h>
int main()
{
    int X;
    scanf("%d", &X);

    int father_age = (X * 4) / 5;
    int daughter_age = X / 5;

    printf("%d %d\n", father_age, daughter_age);
    return 0;
}