#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);
    
    long long int income = (long long int)X * 365 * 365;
    
    printf("%lld\n", income);
    
    return 0;
}