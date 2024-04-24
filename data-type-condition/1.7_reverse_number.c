/*
* problem_url: https://www.hackerrank.com/contests/eid-vacation-practice-a-introduction-to-c-programming-a-batch-5/challenges/reverse-number-36-5
 */

#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    //* print the reversed number with loop
    int reversed = 0;
    while (N != 0)
    {
        int digit = N % 10; //* extract the last digit
        reversed = reversed * 10 + digit;
        N /= 10; //* n = n / 10;
        // printf("n: %d \n", N); //* -> 123, 12, 1, 0
        // printf("rev: %d ", reversed); //* -> 4, 43, 432, 4321
    }

    printf("%d\n", reversed);

    return 0;
}