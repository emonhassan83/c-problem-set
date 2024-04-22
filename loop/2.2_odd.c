/*
* problem_url: https://www.hackerrank.com/contests/eid-vacation-practice-a-introduction-to-c-programming-a-batch-5/challenges/odd-number-5

* logic:
 */

#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int start = (N - 12) / 4;

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", start + i * 2);
    }
    printf("\n");

    return 0;
}