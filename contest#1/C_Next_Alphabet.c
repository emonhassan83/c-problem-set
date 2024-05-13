/*
 * problem_url: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C */

#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);

    // //* printing the next character
    // if (c >= 'a' && c <= 'z')
    //     c = c + 1;
    
    //* Calculate the next character using modular arithmetic
    char next_char = (c - 'a' + 1) % 26 + 'a';

    // printf("%c\n", c);
    printf("%c\n", next_char);
    return 0;
}