/*
 * problem-url: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M */

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int found = 0; //* indicate if at least one lucky number is found

    for (int i = a; i <= b; i++)
    {
        int num = i;
        int isLucky = 1; //* indicate if lucky number is found

        //* check if each digit of the number is either 4 or 7
        while (num > 0)
        {
            int digit = num % 10;
            if (digit != 4 && digit != 7)
            {
                isLucky = 0; //* not a lucky number
                break;
            }
            num /= 10;
        }

        //* if the number is lucky, print it
        if (isLucky)
        {
            printf("%d ", i);
            found = 1;
        }
    }

    //* if no lucky numbers are found, print -1
    if (!found)
    {
        printf("-1");
    }

    return 0;
}