#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Reads two strings A and B.
   Removes from A all characters whose lowercase versions appear in B,
   then sorts the remaining characters and prints them.
   Prints "NULL" if nothing remains. */

void trim_newline(char *s) {
    int len = (int)strlen(s);
    while (len > 0 && (s[len - 1] == '\n' || s[len - 1] == '\r')) {
        s[len - 1] = '\0';
        len--;
    }
}

void bubble_sort_chars(char *s, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if ((unsigned char)s[j] > (unsigned char)s[j + 1]) {
                char t = s[j];
                s[j] = s[j + 1];
                s[j + 1] = t;
            }
        }
    }
}

int main(void) {
    char A[128], B[128];
    unsigned char banned[256];
    char res[128];
    int i, rlen;

    if (fgets(A, sizeof(A), stdin) == NULL) return 0;
    if (fgets(B, sizeof(B), stdin) == NULL) return 0;

    trim_newline(A);
    trim_newline(B);

    for (i = 0; i < 256; i++) banned[i] = 0;
    for (i = 0; B[i] != '\0'; i++) {
        banned[(unsigned char)tolower((unsigned char)B[i])] = 1;
    }

    rlen = 0;
    for (i = 0; A[i] != '\0'; i++) {
        if (!banned[(unsigned char)tolower((unsigned char)A[i])]) {
            res[rlen++] = A[i];
        }
    }
    res[rlen] = '\0';

    if (rlen == 0) {
        printf("NULL\n");
    } else {
        bubble_sort_chars(res, rlen);
        printf("%s\n", res);
    }
    return 0;
}
