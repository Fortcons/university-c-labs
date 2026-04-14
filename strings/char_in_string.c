#include <stdio.h>

#define MAX_SIZE 100

/* For each pair of inputs (character, string), prints 1 if the character
   appears in the string, and 0 otherwise. */

int is_within(char ch, const char *str) {
    while (*str != '\0') {
        if (*str == ch) return 1;
        str++;
    }
    return 0;
}

int main(void) {
    char ch;
    char str[MAX_SIZE];

    while (scanf(" %c %99s", &ch, str) == 2) {
        printf("%d\n", is_within(ch, str));
    }
    return 0;
}
