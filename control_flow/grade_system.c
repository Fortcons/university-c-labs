#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Converts a numeric score to a letter grade.
   90-100 -> A, 70-89 -> B, 60-69 -> C, below 60 -> D */

int main(void) {
    int score;

    if (scanf("%d", &score) != 1) return 0;

    if (score < 60)
        printf("D\n");
    else if (score <= 69)
        printf("C\n");
    else if (score <= 89)
        printf("B\n");
    else
        printf("A\n");

    return 0;
}
