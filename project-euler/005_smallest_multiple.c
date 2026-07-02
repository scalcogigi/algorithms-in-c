/* mmc - qualquer resposta precisa ser divisível por 20 (e de 1 a 20)*/
// busca exaustiva 

#include <stdio.h>

int is_divisible(long long n) {
    for (int i = 1; i <= 20; i++) { // testo divisibilidade de 1 a 20
        // posso ignorar os casos em que n obviamente vai ser divisível (ex: se div por 8, é div por 2 e 4)
        if (n % i != 0)
            return 0;
    }
    return 1;
}

long long smallest_multiple() {
    long long n = 20;
    while (1) { // 1 = true
        if (is_divisible(n)) {
            return n; 
        }
        n += 20; // increment by 20 to ensure divisibility by 20
    }
}

int main() {
    printf("%lld\n", smallest_multiple());
    return 0;
}