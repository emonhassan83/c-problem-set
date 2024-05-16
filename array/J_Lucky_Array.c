/*
 * url: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J */

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

    int min = arr[0];  //* assume min to the first element of the array
    int min_count = 1; //* assume count of minimum element

    //* find the minimum element and count its occurrences
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            min_count = 1;
        }
        else if (arr[i] == min)
        {
            min_count++;
        }
    }

    if (min_count % 2 == 1)
        printf("Lucky\n"); //* if odd, print "Lucky"
    else
        printf("Unlucky\n"); //* if even, print "Unlucky"

    return 0;
}