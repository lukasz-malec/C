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
