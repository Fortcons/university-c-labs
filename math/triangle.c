#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/* Given three side lengths, validates the triangle and computes area and perimeter
   using Heron's formula. */

int main(void) {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        double perimeter = a + b + c;
        double s = perimeter / 2.0;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("area=%.2f;perimeter=%.2f\n", area, perimeter);
    } else {
        printf("These sides do not form a valid triangle.\n");
    }

    return 0;
}
