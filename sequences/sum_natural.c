#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Finds the smallest n such that 1 + 2 + ... + n exceeds m. */

int main(void) {
    int m;
    int n = 0;
    int sum = 0;

    scanf("%d", &m);

    while (sum <= m) {
        n++;
        sum += n;
    }

    printf("%d\n", n);
    return 0;
}
