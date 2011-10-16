#include <stdio.h>

int main(void) {
    float fahr, celsius;
    int LOWER, UPPER, STEP;

    #define LOWER 0
    #define UPPER 300
    #define STEP 20

    celsius = LOWER;

    printf("Celsius\tFahrenheit\n");

    for (celsius; celsius <= UPPER; celsius+=STEP) {
        fahr = (celsius * 32.0) * 1.8;
        printf("%6.0f\t%14.0f\n", celsius, fahr);
    }

    return 0;
}
