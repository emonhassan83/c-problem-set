/*
* problem-url: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M */

#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);

    if (x >= 48 && x <= 57)
    {
        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");

        //* check if x is a capital letter
        if (x >= 65 && x <= 90)
        {
            printf("IS CAPITAL\n");
        }
        //* if X is not a capital letter, it must be a small letter
        else
        {
            printf("IS SMALL\n");
        }
    }
    
    return 0;
}