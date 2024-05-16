/*
* url: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/H */
//! TODO: fixed bug
#include <stdio.h>
#include <math.h>
int main() {
    long long N;
    scanf("%lld", &N);

    int found = 0;

    // Iterate from 0 to sqrt(N)
    long long limit = sqrt(N);
    for (long long X = 0; X <= limit; X++) {
        // Compute Y such that (X^2 + Y^2) % N == 0
        long long Y = sqrt(N - X * X);
        if (X * X + Y * Y == N) {
            printf("%lld %lld\n", X, Y);
            found = 1;
            break;
        }
    }

    if (!found) printf("No solutions\n");

    return 0;
}