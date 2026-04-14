#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Prints all Fibonacci numbers that fall within the range [m, n] (inclusive).
   If m > n, the inputs are swapped automatically. */

int fib(int n) {
    int a, b, c, i;
    if (n <= 2) return 1;
    a = 1;
    b = 1;
    for (i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main(void) {
    int m, n;
    int k, f;
    int first = 1;

    printf("Input m: ");
    scanf("%d", &m);
    printf("Input n: ");
    scanf("%d", &n);
    printf("\n");

    if (m > n) {
        int tmp = m;
        m = n;
        n = tmp;
    }

    for (k = 1; ; k++) {
        f = fib(k);
        if (f > n) break;
        if (f >= m) {
            if (!first) printf(" ");
            printf("%d", f);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}
