/*
 * url: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G */

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

    int is_palindrome = 1; //* assume palindrome initially

    //* use two pointers technique to compare elements from both ends
    int i = 0,
        j = n - 1;
    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            is_palindrome = 0; //* not a palindrome
            break;
        }

        i++;
        j--;
    }

    //* print the result conditionally
    if (is_palindrome)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}