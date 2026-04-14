#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
 * Prints a (2n-1) x (2n-1) spiral (diamond-layer) matrix.
 * Each cell's value equals its "layer" number, counting from the outside in.
 * Example for n=3:
 *   1 1 1 1 1
 *   1 2 2 2 1
 *   1 2 3 2 1
 *   1 2 2 2 1
 *   1 1 1 1 1
 */

int main(void) {
    int n, size, i, j;
    int top, left, bottom, right, layer;

    if (scanf("%d", &n) != 1) return 0;

    size = 2 * n - 1;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            top    = i;
            left   = j;
            bottom = size - 1 - i;
            right  = size - 1 - j;

            layer = top;
            if (left   < layer) layer = left;
            if (bottom < layer) layer = bottom;
            if (right  < layer) layer = right;

            printf("%d", layer + 1);
        }
        printf("\n");
    }
    return 0;
}
