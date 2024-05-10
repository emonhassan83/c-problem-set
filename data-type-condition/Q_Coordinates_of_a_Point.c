/*
 * problem-url: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q */

#include <stdio.h>
int main()
{
    double x, y;
    scanf("%lf %lf", &x, &y);

    //* check if the point is at the origin
    if (x == 0 && y == 0)
    {
        printf("Origem\n");
    }
    //* check if the point is on the X-axis
    else if (y == 0)
    {
        printf("Eixo X\n");
    }
    //* check if the point is on the Y-axis
    else if (x == 0)
    {
        printf("Eixo Y\n");
    }
    //* check in which quarter the point belongs
    else
    {
        if (x > 0 && y > 0)
        {
            printf("Q1\n");
        }
        else if (x < 0 && y > 0)
        {
            printf("Q2\n");
        }
        else if (x < 0 && y < 0)
        {
            printf("Q3\n");
        }
        else
        {
            printf("Q4\n");
        }
    }

    return 0;
}