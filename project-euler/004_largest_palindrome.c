/*palindrome -> when a number reads the same backward as forward */

#include <stdio.h>

/* verify if a number is a palindrome */
int is_palindrome(int n) {
    int original = n;
    int reversed = 0;
    while (n > 0) {
        /* usa o resto da divisão por 10 para obter o último dígito */
        reversed = reversed * 10 + n % 10; /*como armazenou esse n, depois vc vai adicionar o próximo dígito encontrado */
        /* é como se em 1234, por ex, ficase o 4, aí 40 (o *10 adiciona uma casa decimal) e vira 43 (4321)*/
        /* depois remove ele do número */
        n /= 10;
    }
    return original == reversed;
}

/*
1234
reversed = 0

4    -> 0 * 10 + 4
43   -> 4 * 10 + 3
432  -> 43 * 10 + 2
4321 -> 432 * 10 + 1
*/

/* test product of two 3-digit numbers */
/* keep track of the largest palindrome found */
int main() {
    int largest = 0;
    for (int i = 999; i >= 100; i--) {
        for (int j = i; j >= 100; j--) {
            int product = i * j;
            if (is_palindrome(product) && product > largest) {
                largest = product;
            }
        }
    }
    printf("%d\n", largest);
    return 0;
}