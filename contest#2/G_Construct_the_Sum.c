/*
* url: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/G */

//! TODO: code issue fixed in next time
#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int n;
        long long s;
        scanf("%d %lld", &n, &s);
        
        long long sum = 0;
        int result[n];  // To store the result set
        int count = 0;  // To keep track of the number of elements in the result set
        
        // Iterate from 1 to n to find numbers to sum up to s
        for (int i = 1; i <= n; i++) {
            // Check if adding the current number does not exceed the sum s
            if (sum + i <= s) {
                sum += i;          // Add the current number to the sum
                result[count++] = i; // Store the number in the result array
                if (sum == s) break; // If we have reached the desired sum, stop
            }
        }
        
        if (sum == s) {
            // Print the result array
            for (int i = 0; i < count; i++) {
                if (i > 0) printf(" ");
                printf("%d", result[i]);
            }
            printf("\n");
        } else {
            // If we couldn't reach the desired sum, print -1
            printf("-1\n");
        }
    }
    
    return 0;
}
