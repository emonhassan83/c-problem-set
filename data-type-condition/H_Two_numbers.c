/*
* some problem arise solve it */

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    //* calculate floor
    int floor_result = a / b;
    if (a < 0 && b > 0)
    {
        floor_result -= 1;
    }

    //* calculate ceil
    int ceil_result = a / b;
    if (a > 0 && b > 0)
    {
        ceil_result += 1;
    }

    //* calculate round
    int remainder = a % b;
    int round_result;
    if (remainder >= b / 2)
    {
        round_result = ceil_result;
    }
    if (remainder < b / 2)
    {
        round_result = floor_result;
    }

    printf("floor %d / %d = %d\n", a, b, floor_result);
    printf("ceil %d / %d = %d\n", a, b, ceil_result);
    printf("round %d / %d = %d\n", a, b, round_result);

    return 0;
}