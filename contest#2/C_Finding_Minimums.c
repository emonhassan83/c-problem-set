/*
* url: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C */

#include <stdio.h>
int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int numbers[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    //* For each group of size K and iterate thm
    for (int i = 0; i < n; i += k) {
        //* find group as the minimum element
        int min = numbers[i];
        for (int j = i + 1; j < n && j < i + k; j++) {
            //* minimum value found 
            if (numbers[j] < min) {
                min = numbers[j];
            }
        }
        printf("%d ", min);
    }

    printf("\n");
    return 0;
}
