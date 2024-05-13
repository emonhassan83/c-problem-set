/*
* problem-url: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H */

#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    scanf("%d", &x);

    if (x <= 1) {
        printf("NO\n"); //* not prime
        return 0;
    }

    if (x == 2) {
        printf("YES\n"); //* prime
        return 0;
    }

    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            printf("NO\n"); //* not prime
            return 0;
        }
    }

    printf("YES\n"); //* prime
    
    return 0;
}