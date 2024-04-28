/*
 * problem-url: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L */

#include <stdio.h>
int main()
{
    int f1[101], s1[101], f2[101], s2[101];

    scanf("%s %s", f1, s1);
    scanf("%s %s", f2, s2);

    //* check if they are same second name
    int areBrother = 1; //* create flag they are brothers initially
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
    {
        //* not same second name
        if (s1[i] != s2[i])
        {
            areBrother = 0;
            break;
        }
    }

    //* condition apply if areBrother or not
    if (areBrother)
    {
        printf("ARE Brothers\n");
    }
    else
    {
        printf("NOT\n");
    }

    return 0;
}