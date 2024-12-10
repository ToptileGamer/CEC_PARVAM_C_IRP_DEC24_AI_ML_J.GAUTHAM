#include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (space = 1; space <= i - 1; space++) {
            printf("  ");
        }
        for (j = 1; j <= 2 * (rows - i + 1) - 1; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    for (i = rows - 1; i >= 1; i--) {
        for (space = 1; space <= i - 1; space++) {
            printf("  ");
        }
        for (j = 1; j <= 2 * (rows - i + 1) - 1; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}