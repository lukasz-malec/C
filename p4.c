// Algorytm Euklidesa. Największy wspólny dzielnik (NWD) liczb naturalnych m
// i n (bez straty ogólności przyjmujemy m ⩾ n) zdefiniowany jest warunkami:
// Jeśli n = 0, NWD(m, n) = m.
// Jeśli n > 0, NWD(m, n) = NWD(n, m mod n).
// Napisz prosty (tzn. jednopętlowy) program obliczający iteracyjnie NWD(m, n) dla
// m i n wprowadzanych z klawiatury


#include <stdio.h>

int NWD(int m, int n) {
    while (n != 0) { 
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m; 
}

int main() {
    int m, n;
    
    printf("Podaj dwie liczby naturalne m i n (m >= n): ");
    if (scanf("%d %d", &m, &n) != 2 || m < n || m <= 0 || n < 0) {
        printf("Błąd: podaj poprawne liczby m i n, gdzie m >= n >= 0.\n");
        return 1;
    }


    printf("NWD(%d, %d) = %d\n", m, n, NWD(m, n));

    return 0;
}
