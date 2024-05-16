/*
* url: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/F */

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    long long number;
    int max_count = 0;

    for (int i = 0; i < n; i++) {
        scanf("%lld", &number);
        
        //* if number divisible n of times then count
        int count = 0;
        while (number % 2 == 0) {
            number /= 2;
            count++;
        }

        //* find max count with condition
        if (count > max_count) {
            max_count = count;
        }
    }

    printf("%d\n", max_count);
    return 0;
}
