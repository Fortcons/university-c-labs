#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Computes the Greatest Common Divisor and Least Common Multiple of two integers. */

int main(void) {
    int a, b;
    int x, y, t;
    int gcd, lcm;

    if (scanf("%d %d", &a, &b) != 2) return 0;

    x = a;
    y = b;
    while (y != 0) {
        t = x % y;
        x = y;
        y = t;
    }
    gcd = x;
    lcm = a / gcd * b;  /* divide before multiply to avoid overflow */

    printf("%d %d\n", gcd, lcm);
    return 0;
}
