#include <stdio.h>

#define ROWS 3
#define COLS 4

/*
 * Finds a saddle point in a 3x4 matrix.
 * A saddle point is an element that is the maximum in its row
 * and the minimum in its column.
 */

void read_matrix(int a[ROWS][COLS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

int is_col_min(const int a[ROWS][COLS], int row, int col) {
    int i;
    int v = a[row][col];
    for (i = 0; i < ROWS; i++) {
        if (a[i][col] < v) return 0;
    }
    return 1;
}

int find_saddle(const int a[ROWS][COLS], int *out_r, int *out_c) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        int row_max = a[i][0];
        for (j = 1; j < COLS; j++) {
            if (a[i][j] > row_max) row_max = a[i][j];
        }
        for (j = 0; j < COLS; j++) {
            if (a[i][j] == row_max && is_col_min(a, i, j)) {
                *out_r = i;
                *out_c = j;
                return 1;
            }
        }
    }
    return 0;
}

int main(void) {
    int a[ROWS][COLS];
    int r, c;

    read_matrix(a);

    if (find_saddle(a, &r, &c)) {
        printf("Saddle point found: a[%d][%d] = %d\n", r, c, a[r][c]);
    } else {
        printf("No saddle point found.\n");
    }
    return 0;
}
