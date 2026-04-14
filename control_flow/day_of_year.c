#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Given a date (year/month/day), prints which day of the year it is.
   Correctly handles leap years (Feb = 29 days). */

int main(void) {
    int year, month, day;
    scanf("%d %d %d", &year, &month, &day);

    int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        days_in_month[1] = 29;  /* leap year */
    }

    int sum = day;
    int i;
    for (i = 0; i < month - 1; i++) {
        sum += days_in_month[i];
    }

    if (sum == 1) {
        printf("%d-%d-%d is the first day of the year.\n", year, month, day);
    } else {
        printf("%d-%d-%d is the %dth day of the year.\n", year, month, day, sum);
    }
    return 0;
}
