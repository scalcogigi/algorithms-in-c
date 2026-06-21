/* generate even Fibonacci numbers and sum the even numbers -> a + b = c -> if c is even, add it to the sum */
#include <stdio.h> 

int main() {
    int a = 1, b = 2, c = 0, sum = 2; /* initialize with the 2nd and 3rd numbers and sum = 2 bcz 1+1 = 2, that is even */
    while (c <= 4000000) { 
        c = a + b;
        if (c % 2 == 0) { 
            sum += c; 
        }
        /*update variables sequentially*/
        a = b; 
        b = c; 
    }
    printf("%d\n", sum); 
    return 0;
}