#include <stdio.h>

#define MAX_SIZE 100

/* Reads a line of text and prints each word on a separate line,
   skipping all whitespace delimiters. */

void print_words(char str[]) {
    int i = 0;
    char word[MAX_SIZE];
    int j = 0;

    while (str[i] != '\0') {
        /* skip whitespace */
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') i++;
        if (str[i] == '\0') break;

        /* collect word */
        while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0') {
            word[j++] = str[i++];
        }
        word[j] = '\0';
        printf("%s\n", word);
        j = 0;
    }
}

int main(void) {
    char str[MAX_SIZE];
    fgets(str, sizeof(str), stdin);
    print_words(str);
    return 0;
}
