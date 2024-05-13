/* 
* url: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G */

#include <stdio.h>
int main() {
    long long int eyes, mouths, bodies;
    scanf("%lld %lld %lld", &eyes, &mouths, &bodies);

    // Find the maximum number of idols using option 3
    long long int idols_option3;
    if (eyes < mouths) {
        idols_option3 = eyes;
    } else {
        idols_option3 = mouths;
    }
    if (idols_option3 > bodies) {
        idols_option3 = bodies;
    }

    // Remove the idols made using option 3
    eyes -= idols_option3;
    mouths -= idols_option3;
    bodies -= idols_option3;

    // Calculate the remaining idols that can be made using option 1
    long long int idols_option1 = eyes / 2;
    if (idols_option1 > bodies) {
        idols_option1 = bodies;
    }

    // Calculate the total number of idols
    long long int total_idols = idols_option3 + idols_option1;

    printf("%lld\n", total_idols);

    return 0;
}
