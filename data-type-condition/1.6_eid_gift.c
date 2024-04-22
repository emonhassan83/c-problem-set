/*
* problem_url: https://www.hackerrank.com/contests/eid-vacation-practice-a-introduction-to-c-programming-a-batch-5/challenges/eid-gift
 */

#include <stdio.h>
int main()
{
  int n, m;
  scanf("%d %d", &n, &m);

  long long int divisor = (long long int)n / m;
  int remainder = (int)((long long int)n % m);

  printf("%d %d", divisor, remainder);
  return 0;
}