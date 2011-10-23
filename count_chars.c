#include <stdio.h>

int main (void) {
    int c;
    int counter = 0;
    printf("%d\n", counter);

    for (counter = 0; (c = getchar()) != EOF; counter++) {
        if (c == '\n')
            counter--;
    }

    printf("number of caracters is: %d \n", counter);

    return 0;
}
