#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Finds all perfect numbers in the range [m, n].
   A perfect number equals the sum of its proper divisors (e.g. 6 = 1+2+3). */

int factor_sum(int number) {
    if (number == 1) return 1;
    int sum = 1;
    int i;
    for (i = 2; i <= number / 2; i++) {
        if (number % i == 0) sum += i;
    }
    return sum;
}

int main(void) {
    int m, n;

    printf("Input m: ");
    scanf("%d", &m);
    printf("Input n: ");
    scanf("%d", &n);

    for (int x = m; x <= n; x++) {
        if (factor_sum(x) == x) {
            printf("%5d", x);
        }
    }
    printf("\n");
    return 0;
}
