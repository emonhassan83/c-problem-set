/*
* url: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M */

#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
 
    //* take array input for loop
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    //* find array min & max element
    int min = INT_MAX,
        max = INT_MIN;
    int min_value_index, max_value_index;
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            min_value_index = i;
        }
        if (max < arr[i])
        {
            max = arr[i];
            max_value_index = i;
        }
    }
 
    //* swipe array max and min values
    int temp = arr[max_value_index];
    arr[max_value_index] = arr[min_value_index];
    arr[min_value_index] = temp;
 
    //* print array element
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
 
    // printf("%d %d\n", min, max);
    // printf("%d %d", min_value_index, max_value_index);
 
    return 0;
}