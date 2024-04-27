#include <stdio.h>
int main()
{
    float r;
    scanf("%f", &r);

    float area = r * r * 3.141592653;

    printf("%.9f", area);
    return 0;
}