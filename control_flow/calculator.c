#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Basic integer calculator: reads "a b op" and prints the result.
   Handles division by zero and non-integer quotients. */

int main(void) {
    long long a, b;
    char op;

    if (scanf("%lld %lld %c", &a, &b, &op) != 3) {
        printf("Input error\n");
        return 0;
    }

    switch (op) {
    case '+':
        printf("%lld\n", a + b);
        break;
    case '-':
        printf("%lld\n", a - b);
        break;
    case '*':
        printf("%lld\n", a * b);
        break;
    case '/':
        if (b == 0) {
            printf("Error: division by zero\n");
            return 0;
        }
        if (a % b == 0)
            printf("%lld\n", a / b);
        else
            printf("%.2f\n", (double)a / b);
        break;
    default:
        printf("Error: unknown operator\n");
        break;
    }
    return 0;
}
