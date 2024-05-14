//* https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q

#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
 
    for (int t = 1; t <= test; t++)
    {
        int n;
        scanf("%d", &n);
 
        //* extract digit using do-while loop
        do
        {
            printf("%d ", n % 10);
            n = n / 10;
        }
        while (n != 0);
        
        printf("\n");
    }
 
    return 0;
}