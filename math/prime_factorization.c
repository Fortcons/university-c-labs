#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Prints the prime factorization of a positive integer. Example: 12 = 2*2*3 */

int main(void) {
    int divisor;
    int n;
    int first = 1;

    if (scanf("%d", &n) != 1) return 0;

    printf("%d=", n);

    if (n == 1) {
        puts("1");
        return 0;
    }

    for (divisor = 2; divisor <= n; ++divisor) {
        while (n % divisor == 0) {
            if (!first) printf("*");
            printf("%d", divisor);
            first = 0;
            n /= divisor;
        }
    }

    printf("\n");
    return 0;
}
