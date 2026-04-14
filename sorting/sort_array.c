#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Reads 4 integers and sorts them in ascending order using bubble sort. */

int main(void) {
    int a[4];
    int i, j, temp;

    if (scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]) != 4) {
        return 0;
    }

    for (i = 3; i >= 0; i--) {
        for (j = 0; j < i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 4; i++) {
        if (i > 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}
