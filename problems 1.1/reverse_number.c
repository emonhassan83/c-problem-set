#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int reversed = 0;
    while (N != 0)
    {
        int digit = N % 10;
        reversed = reversed * 10 + digit;
        N /= 10;
    }

    // Print the reversed number
    printf("%d\n", reversed);

    return 0;
}