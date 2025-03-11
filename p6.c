// Silnia rekurencyjnie i iteracyjnie. Napisać funkcję obliczającą n! metodą rekurencyjną, tj. według wzoru
// n! = n · (n − 1)!
// (taka funkcja wywołuje samą siebie) oraz drugą, iteracyjną


#include <stdio.h>
#include <stdlib.h>

// Funkcja rekurencyjna obliczająca silnię
long long factorial_recursive(int n) {
    if (n == 0 || n == 1) 
        return 1;
    return n * factorial_recursive(n - 1);
}

// Funkcja iteracyjna obliczająca silnię
 long long factorial_iterative(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}


int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Bledna liczba argumentow");
        return 1;
    }

    int mode = atoi(argv[1]); // Tryb obliczeń: 0 - rekurencyjny, 1 - iteracyjny
    int n = atoi(argv[2]);    // Pobranie wartości n z argumentów

    if (n < 0) {
        printf("Silnia jest zdefiniowana tylko dla liczb nieujemnych!\n");
        return 1;
    }

    long long result;

    if (mode == 0) {
        printf("Obliczanie rekurencyjnie...\n");
        result = factorial_recursive(n);
    } else if (mode == 1) {
        printf("Obliczanie iteracyjnie...\n");
        result = factorial_iterative(n);
    } else {
        printf("Niepoprawny tryb, uzyj 0 (rekurencyjnie) lub 1 (iteracyjnie).\n");
        return 1;
    }

    printf("%d! = %llu\n", n, result);
    return 0;
}
