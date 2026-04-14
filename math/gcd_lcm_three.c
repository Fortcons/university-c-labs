#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Computes GCD and LCM of three long long integers using the Euclidean algorithm. */

long long gcd_ll(long long a, long long b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}

long long lcm_ll(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    long long g = gcd_ll(a, b);
    long long res = (a / g) * b;
    if (res < 0) res = -res;
    return res;
}

int main(void) {
    long long a, b, c;
    if (scanf("%lld %lld %lld", &a, &b, &c) != 3) return 0;

    long long g = gcd_ll(gcd_ll(a, b), c);
    long long l = lcm_ll(lcm_ll(a, b), c);

    printf("%lld %lld\n", g, l);
    return 0;
}
