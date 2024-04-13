#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int start = (N - 12) / 4;
    
    for (int i = 0; i < 4; i++) {
        printf("%d ", start + i * 2);
    }
    printf("\n");
    
    return 0;
}