#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n , &m);

      long long int divisor = (long long int)n / m;
    int remainder = (int)((long long int)n % m);

    printf("%d %d", divisor, remainder);
    return 0;
}