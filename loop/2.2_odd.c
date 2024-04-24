/*
* problem_url: https://www.hackerrank.com/contests/eid-vacation-practice-a-introduction-to-c-programming-a-batch-5/challenges/odd-number-5

* logic: N as the sum of 4 consecutive odd numbers, we can express the sum as:

* N(sum) = start + (start+2) + (start+4) + (start+6)
* Simplifying this, we have: N = 4 × start + 12
* then, start = N - 12 / 4;
 */

#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    //* determine the starting odd number and counting 4 consecutive odd numbers
    int start = (N - 12) / 4;
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", start + i * 2);
    }

    printf("\n");
    return 0;
}