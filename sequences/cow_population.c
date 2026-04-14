#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Cow population problem (recursive variant of a generalised Fibonacci sequence).
   A cow starts producing calves in year 4; each calf follows the same rule.
   cow_count(y) = cow_count(y-1) + cow_count(y-4)  for y > 3
   cow_count(y) = 1                                  for y <= 3        */

long long cow_count(int year) {
    if (year <= 3) return 1;
    return cow_count(year - 1) + cow_count(year - 4);
}

int main(void) {
    int year;
    printf("Please input required years: ");
    scanf("%d", &year);

    printf("After %d years there are %lld cows.\n", year, cow_count(year));
    return 0;
}
