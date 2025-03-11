// Sito Erastotenesa. Poszukać informacji na temat algorytmu sita Erastotenesa
// i napisać program znajdujący wszystkie liczby pierwsze mniejsze od zadanej wartości N


#include <stdio.h>
#include <stdbool.h>

void sitoEratostenesa(int N) {
    if (N < 2) {
        printf("Brak liczb pierwszych dla N < 2.\n");
        return;
    }

    bool isPrime[N]; 
    for (int i = 0; i < N; i++)
        isPrime[i] = true; 

    for (int p = 2; p * p < N; p++) {
        if (isPrime[p]) { // Jeśli liczba jest pierwsza, wykreślamy jej wielokrotności
            for (int i = p * p; i < N; i += p)
                isPrime[i] = false;
        }
    }

    
    printf("Liczby pierwsze mniejsze od %d:\n", N);
    for (int i = 2; i < N; i++) {
        if (isPrime[i])
            printf("%d ", i);
    }
    printf("\n");
}


int main() {
    int N;
    printf("Podaj liczbe N: ");
    scanf("%d", &N);

    sitoEratostenesa(N);
    return 0;
}
