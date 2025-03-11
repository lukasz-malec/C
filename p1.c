// Napisać program, który czyta ciąg liczb ze standardowego wejścia aż do wystąpienia znaku końca pliku (kombinacja klawiszy Ctrl–D na klawiaturze), a następnie
// oblicza średnią arytmetyczną i odchylenie standardowe, po czym wyprowadza wyniki na standardowe wyjście. W pierwszej wersji programu, dane mogą być
// przechowywane w jednowymiarowej tablicy liczb zmiennoprzecinkowych o ustalonym rozmiarze maksymalnym (np. Nmax = 1000) zadeklarowanym jako stała
// całkowita 


#include <stdio.h>
#include <math.h>

#define Nmax 1000  

int main() {
    double numbers[Nmax];
    int count = 0;
    double sum = 0.0, mean, variance = 0.0, stddev;

    printf("Wprowadz liczby (zakoncz Ctrl+D):\n");

    while (count < Nmax && scanf("%lf", &numbers[count]) == 1) {
        sum += numbers[count];
        count++;
    }

    mean = sum / count;

    // Obliczanie wariancji
    for (int i = 0; i < count; i++) {
        variance += (numbers[i] - mean) * (numbers[i] - mean);
    }
    variance /= count;
    
    // Obliczanie odchylenia standardowego
    stddev = sqrt(variance);

    printf("Srednia arytmetyczna: %.5f\n", mean);
    printf("Odchylenie standardowe: %.5f\n", stddev);

    return 0;
}
