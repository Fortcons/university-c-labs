#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

/* Reads a line and prints it in reverse order (in-place swap). */

void reverse_string(char str[]) {
    int start = 0;
    int end = (int)strlen(str) - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main(void) {
    char str[MAX_SIZE];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    reverse_string(str);
    printf("%s\n", str);
    return 0;
}
