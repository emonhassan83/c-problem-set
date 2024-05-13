/*
* problem_url: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A

* formula: (100 * P) / (100 - X) here x is discount and p discounted price */

#include <stdio.h>
int main()
{
    int x;
    double p;

    scanf("%d %lf", &x, &p);

    double original_price = (100 * p) / (100 - x);

    printf("%.2lf\n", original_price);
    return 0;
}