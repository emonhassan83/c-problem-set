#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int start = (N - 20) / 5;
    
    for (int i = 0; i < 5; i++) {
        printf("%d ", start + 2 * i);
    }
    printf("\n");
    return 0;
}