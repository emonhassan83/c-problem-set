/*
* url: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H */

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //* sort the array using two-pointer method
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            //* swap arr[i] and arr[j] if arr[i] is greater than arr[j]
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}