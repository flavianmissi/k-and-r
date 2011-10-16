#include <stdio.h>

int main(void) {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("Fahrenheit\tCelcius\n");

    for (fahr; fahr <= upper; fahr+=step) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%6.0f\t%14.1f\n", fahr, celsius);
    }

    return 0;
}
