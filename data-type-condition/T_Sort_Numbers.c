/*
 * problem-url: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T */

#include <stdio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sorted_num(int a, int b, int c)
{
    if (a > b)
        swap(&a, &b);
    if (a > c)
        swap(&a, &c);
    if (b > c)
        swap(&b, &c);

    printf("%d\n%d\n%d\n\n", a, b, c);
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    //* sorted function call where number are sorted
    sorted_num(a, b, c);
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}