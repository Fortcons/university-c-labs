#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Reads a 3x3 matrix and prints the sum of its main diagonal. */

int main(void) {
    int a[3][3];
    int i, j;
    int sum = 0;

    printf("Please input the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        sum += a[i][i];
    }

    printf("The sum of the diagonal is %d.\n", sum);
    return 0;
}
