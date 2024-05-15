//* https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U

#include <stdio.h>
int main()
{
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int num = i;
        int sum_of_digit = 0;

        //* extract each digit and sum from the current number
        while (num > 0)
        {
            sum_of_digit += num % 10;
            num /= 10;
        }

        //* checks if the sum of digits contains this range
        if (sum_of_digit >= a && sum_of_digit <= b)
            sum += i;
    }

    printf("%d\n", sum);
    return 0;
}