// Napisać program znajdujący pierwiastki równania kwadratowego o współczynnikach czytanych ze standardowego wejścia w drodze interaktywnych pytań i
// odpowiedzi użytkownika. Należy przy tym zadbać o przekazywanie odpowiednich
// komunikatów użytkownikowi (współczynnik przy x
// 2 nie może być równy 0 itp.)



#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta, x1, x2;


    printf("Program rozwiazuje rownanie kwadratowe postaci: ax^2 + bx + c = 0\n");

    do {
        printf("Podaj wspolczynnik a (a != 0): ");
        if (scanf("%lf", &a) != 1) {
            printf("Błąd wejścia. Wprowadź poprawną liczbę.\n");
            return 1;
        }
        if (a == 0) {
            printf("Wspolczynnik a nie moze byc rowny 0. Sprobuj ponownie.\n");
        }
    } while (a == 0);



    printf("Podaj wspolczynnik b: ");
    if (scanf("%lf", &b) != 1) {
        printf("Błąd wejścia. Wprowadź poprawną liczbę.\n");
        return 1;
    }

    
    printf("Podaj wspolczynnik c: ");
    if (scanf("%lf", &c) != 1) {
        printf("Błąd wejścia. Wprowadź poprawną liczbę.\n");
        return 1;
    }

    
    delta = b * b - 4 * a * c;
    printf("Delta = %.5f\n", delta);

   
    if (delta > 0) {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        printf("Rownanie ma dwa pierwiastki rzeczywiste:\n");
        printf("x1 = %.5f\n", x1);
        printf("x2 = %.5f\n", x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Rownanie ma jedno podwojne rozwiazanie:\n");
        printf("x = %.5f\n", x1);
    } 

    return 0;
}
