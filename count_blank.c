#include <stdio.h>

int main (void) {
    int c;
    int new_lines = 0, tabs = 0, white_spaces = 0;

    while((c = getchar()) != EOF) {
        if (c == '\n')
            new_lines++;
        if (c == '\t')
            tabs++;
        if (c == ' ')
            white_spaces++;
    }

    printf("new lines: %d\n", new_lines);
    printf("tabs: %d\n", tabs);
    printf("white spaces: %d\n", white_spaces);

    return 0;
}
