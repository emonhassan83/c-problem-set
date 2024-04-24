/*
* problem_url: https://www.hackerrank.com/contests/eid-vacation-practice-a-introduction-to-c-programming-a-batch-5/challenges/even-number-10-1

* logic: N as the sum of 5 consecutive even numbers, we can express the sum as:

* N(sum) = start + (start+2) + (start+4) + (start+6) + (start+8)
* Simplifying this, we have: N = 5 × start + 20
* then, start = N - 20 / 5;
 */

#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    //* determine the starting even number and counting 5 consecutive even numbers
    int start = (N - 20) / 5;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", start + 2 * i);
    }

    printf("\n");
    return 0;
}