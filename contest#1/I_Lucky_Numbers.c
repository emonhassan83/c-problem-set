/* 
* url: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I */

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    //* Extract first and second digit
    int first_digit = n / 10,
        second_digit = n % 10;

    if (second_digit == 0 || first_digit == 0 || (first_digit % second_digit == 0) || (second_digit % first_digit == 0))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}