#include <stdio.h>

int main (void) {
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    printf("getchar() != EOF is: %d\n", (getchar() != EOF));

    return 0;
}
