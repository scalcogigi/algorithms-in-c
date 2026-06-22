/* checks divisibility, then factors */
/* long long -> 64bits -> 8 bytes -> usado para suportar números maiores que o int permite*/

#include <stdio.h>

int main() {
    long long n = 600851475143; /*number to be factored*/
    long long divisor = 2; /*starts with the smallest prime number*/
    long long fator = 0; /* finds the largest prime factor */

    while (n > 1) {
        if (n % divisor == 0) { 
            fator = divisor;
            n /= divisor; 
        } else {
            divisor++; // increment divisor to check the next number
        }
    }

    printf("%lld\n", fator);

    return 0;
}