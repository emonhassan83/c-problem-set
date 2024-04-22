/* 
* problem_url: https://www.hackerrank.com/contests/eid-vacation-practice-a-introduction-to-c-programming-a-batch-5/challenges/even-number-10-1

* logic: 
 */

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