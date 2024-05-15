//* https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int start = 1;
    //* implement pattern this pum gams by for loop
    for (int i = 1; i <= n; i++)
    {
        printf("%d %d %d PUM\n", start, start + 1, start + 2);
        start += 4;
    }
    
    return 0;
}