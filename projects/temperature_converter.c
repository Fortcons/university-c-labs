#include <stdio.h>

/*
 * Temperature Converter
 * ---------------------
 * Converts between Celsius, Fahrenheit, and Kelvin.
 * Usage: enter a value followed by the source unit (C / F / K).
 * The program prints the equivalent in the other two units.
 *
 * Formulas:
 *   F = C * 9/5 + 32
 *   K = C + 273.15
 */

int main(void) {
    double value;
    char unit;
    double celsius;

    printf("=== Temperature Converter ===\n");
    printf("Enter value and unit (e.g.  100 C  or  212 F  or  373.15 K): ");

    if (scanf("%lf %c", &value, &unit) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    switch (unit) {
    case 'C': case 'c':
        celsius = value;
        break;
    case 'F': case 'f':
        celsius = (value - 32.0) * 5.0 / 9.0;
        break;
    case 'K': case 'k':
        celsius = value - 273.15;
        break;
    default:
        printf("Unknown unit '%c'. Use C, F, or K.\n", unit);
        return 1;
    }

    double fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    double kelvin     = celsius + 273.15;

    printf("\nResults:\n");
    printf("  Celsius    : %.2f C\n", celsius);
    printf("  Fahrenheit : %.2f F\n", fahrenheit);
    printf("  Kelvin     : %.2f K\n", kelvin);

    return 0;
}
