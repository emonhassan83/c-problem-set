/*
* url: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L */
//! TODO
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Read the number of elements in the array

        int A[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]); // Read the array elements
        }

        // For every sub-array, calculate the maximum element
        for (int i = 0; i < N; i++) {
            int maxVal = A[i];
            for (int j = i; j < N; j++) {
                if (A[j] > maxVal) {
                    maxVal = A[j];
                }
                // Print the maximum value of the current sub-array
                printf("%d ", maxVal);
            }
        }
        printf("\n"); // New line for each test case
    }

    return 0;
}
