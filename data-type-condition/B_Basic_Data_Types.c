/*
* problem-url: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/B
*/

#include <stdio.h>
int main() {
    int integer;
    long long longLongInteger;
    char character;
    float floatingPoint;
    double doubleFloatingPoint;

    //* take input
    scanf("%d %lld %c %f %lf", &integer, &longLongInteger, &character, &floatingPoint, &doubleFloatingPoint);

    //* print output
    printf("%d\n", integer);
    printf("%lld\n", longLongInteger);
    printf("%c\n", character);
    printf("%.2f\n", floatingPoint);
    printf("%.1lf\n", doubleFloatingPoint);

    return 0;
}
