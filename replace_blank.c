#include <stdio.h>
#include <ctype.h>
#include <assert.h>

#define INPUT_SIZE 20

void clean_white_spaces(char gross_output[], char output[]) {
    int position;
    int i, counter = 0;

    for (i = 0; i < INPUT_SIZE; i++) {
        if ((char)gross_output[i] == ' ' && (char)gross_output[i+1] == ' ') {
            continue;
        }

        if (isalpha((int)gross_output[i]) || isspace((int)gross_output[i]))
            output[counter] = gross_output[i];

        counter++;
    }

}

void test_should_replace_two_white_spaces_with_one(void) {
    char input[INPUT_SIZE] = {'a', ' ', ' ', 'b'};
    char output[INPUT_SIZE];
    char expected[INPUT_SIZE] = {'a', ' ', 'b'};
    int i = 0;

    clean_white_spaces(input, output);

    for (i; i < 3; i++) {
        assert(output[i] == expected[i]);
    }
}

void test_should_replace_three_white_spaces_with_one(void) {
    char input[INPUT_SIZE] = {'a', ' ', ' ', ' ', 'b'};
    char output[INPUT_SIZE];
    char expected[INPUT_SIZE] = {'a', ' ', 'b'};
    int i = 0;

    clean_white_spaces(input, output);

    for (i; i < 3; i++) {
        assert(output[i] == expected[i]);
    }
}

void test_should_replace_seven_white_spaces_with_one(void) {
    char input[INPUT_SIZE] = {'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'b'};
    char output[INPUT_SIZE];
    char expected[INPUT_SIZE] = {'a', ' ', 'b'};
    int i = 0;

    clean_white_spaces(input, output);

    for (i; i < 3; i++) {
        assert(output[i] == expected[i]);
    }
}

void test_should_replace_two_white_spaces_at_two_different_positions_in_the_array(void) {
    char input[INPUT_SIZE] = {'a', ' ', ' ', 'b', ' ', ' ', 'c'};
    char output[INPUT_SIZE];
    char expected[INPUT_SIZE] = {'a', ' ', 'b', ' ', 'c'};
    int i = 0;

    clean_white_spaces(input, output);

    for (i; i < 5; i++) {
        assert(output[i] == expected[i]);
    }
}

int main (void) {
    test_should_replace_two_white_spaces_with_one();
    test_should_replace_three_white_spaces_with_one();
    test_should_replace_seven_white_spaces_with_one();
    test_should_replace_two_white_spaces_at_two_different_positions_in_the_array();

    int input, i = 0;
    char output[INPUT_SIZE];
    char gross_output[INPUT_SIZE];

    while ((input = getchar()) != EOF && i < INPUT_SIZE) {
        gross_output[i] = (char)input;
        i++;
    }

    for (i = 0; i < INPUT_SIZE; i++) {
        clean_white_spaces(gross_output, output);

        printf("%c", output[i]);
    }

    return 0;
}
