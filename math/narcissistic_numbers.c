#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Prints all 4-digit narcissistic numbers (a^4 + b^4 + c^4 + d^4 == n).
   Also known as Armstrong numbers of order 4. */

int main(void) {
    int n, d, a, b, c;
    int count = 0;

    for (n = 1000; n <= 9999; n++) {
        d = n / 1000;
        a = (n / 100) % 10;
        b = (n / 10) % 10;
        c = n % 10;

        if (d*d*d*d + a*a*a*a + b*b*b*b + c*c*c*c == n) {
            if (count > 0) putchar(' ');
            printf("%d", n);
            count++;
        }
    }
    putchar('\n');
    return 0;
}
