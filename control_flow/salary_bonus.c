#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Calculates a sales bonus based on a tiered commission schedule (in 10,000 CNY).
   Tiers (amount -> rate):
     0 - 10   -> 10%
    10 - 20   -> 7.5%
    20 - 40   -> 5%
    40 - 60   -> 3%
    60 - 100  -> 1.5%
   100+       -> 1%
*/

int main(void) {
    double a;
    double bonus = 0;

    if (scanf("%lf", &a) != 1) return 0;

    if (a <= 10) {
        bonus = a * 0.10;
    } else if (a <= 20) {
        bonus = 10 * 0.10 + (a - 10) * 0.075;
    } else if (a <= 40) {
        bonus = 10 * 0.10 + 10 * 0.075 + (a - 20) * 0.05;
    } else if (a <= 60) {
        bonus = 10 * 0.10 + 10 * 0.075 + 20 * 0.05 + (a - 40) * 0.03;
    } else if (a <= 100) {
        bonus = 10 * 0.10 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + (a - 60) * 0.015;
    } else {
        bonus = 10 * 0.10 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + 40 * 0.015 + (a - 100) * 0.01;
    }

    printf("Bonus is %.2f wan yuan\n", bonus);
    return 0;
}
