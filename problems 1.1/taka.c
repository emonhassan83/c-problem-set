#include <stdio.h>
int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);

    int Rina = (X - Y) / 2;
    int Mina = X - Rina;

    printf("%d %d", Mina, Rina);
    return 0;
}