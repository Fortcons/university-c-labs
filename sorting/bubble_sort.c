#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Sorts 3 integers in ascending order using bubble sort. */

int main(void) {
    int arr[3] = {0};
    int i = 0, j = 0;

    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Order from small to big: %d %d %d\n", arr[0], arr[1], arr[2]);
    return 0;
}
