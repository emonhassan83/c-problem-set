/*
* problem-url: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J */

#include <stdio.h>
int is_prime(int num) {
    if (num <= 1) {
        return 0; //* not prime
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; //* not prime
        }
    }
    return 1; //* prime
}

int main() {
    int n;
    scanf("%d", &n);

    //* print prime numbers up to n
    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
