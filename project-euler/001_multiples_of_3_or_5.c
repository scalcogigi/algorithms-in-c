/* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000. */

/* 1. Loop through all positive numbers below 1000; */
/* 2. Check if each number is a multiple of 3 or 5; */
/* 3. If it is, add it to the sum; */
/* 4. Print the final sum; */

#include <stdio.h> /* standard input/output header */

int main() {
    int sum = 0;
    for (int i = 1; i < 1000; i++) { /* while i is less than 1000 */
        /* it doesn't make a difference to start from 0 or 1 bcz 0 is an neutral element for addition */
        if (i % 3 == 0 || i % 5 == 0) { /* % returns the remainder */
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}