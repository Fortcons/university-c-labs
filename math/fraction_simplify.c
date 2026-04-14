#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Reads a fraction a/b and prints it in lowest terms using GCD. */

int gcd(int x, int y) {
    int t;
    while (y != 0) {
        t = x % y;
        x = y;
        y = t;
    }
    return x;
}

int main(void) {
    long long a, b;
    scanf("%lld %lld", &a, &b);

    int g = gcd((int)a, (int)b);
    a /= g;
    b /= g;

    printf("%lld %lld\n", a, b);
    return 0;
}
