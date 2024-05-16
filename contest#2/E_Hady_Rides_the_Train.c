/*
* url: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/E */
//! TODO
#include <stdio.h>
int main() {
    long long id;
    scanf("%lld", &id);

    // Calculate the row number (each row has 4 seats)
    int row = id / 4;

    // Calculate the column number
     int col;
    if (id % 4 == 0) {
        col = 3;
    } else {
        col = (id % 4);
    }

    printf("%d %d\n", row, col);
    return 0;
}
