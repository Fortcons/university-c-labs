#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAXN 20
#define MAXU (MAXN * 2)

/*
 * Reads two arrays, builds their set union (no duplicates),
 * then prints the union sorted in descending order.
 */

int contains(const int arr[], int len, int x) {
    int i;
    for (i = 0; i < len; i++) {
        if (arr[i] == x) return 1;
    }
    return 0;
}

void add_unique(int unionArr[], int *len, int x) {
    if (!contains(unionArr, *len, x)) {
        unionArr[*len] = x;
        (*len)++;
    }
}

void bubble_sort_desc(int arr[], int len) {
    int i, j;
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}

void print_array(const int arr[], int len) {
    int i;
    for (i = 0; i < len; i++) {
        printf("%d", arr[i]);
        if (i != len - 1) printf(" ");
    }
    printf("\n");
}

int main(void) {
    int n1, n2;
    int a[MAXN], b[MAXN];
    int u[MAXU];
    int ulen = 0;
    int i;

    if (scanf("%d", &n1) != 1) return 0;
    for (i = 0; i < n1; i++) scanf("%d", &a[i]);

    if (scanf("%d", &n2) != 1) return 0;
    for (i = 0; i < n2; i++) scanf("%d", &b[i]);

    for (i = 0; i < n1; i++) add_unique(u, &ulen, a[i]);
    for (i = 0; i < n2; i++) add_unique(u, &ulen, b[i]);

    bubble_sort_desc(u, ulen);
    print_array(u, ulen);
    return 0;
}
