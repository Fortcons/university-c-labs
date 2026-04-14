#include <stdio.h>
#include <string.h>

/* Caesar cipher: shifts every character in the input string by n positions. */

int main(void) {
    int n, i;
    char str[100];

    scanf("%d", &n);
    getchar();
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        str[i] += n;
    }
    printf("%s", str);
    return 0;
}
