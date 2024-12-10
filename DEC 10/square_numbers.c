#include <stdio.h>

int main() {
    int num, i, square;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The square series up to %d is:\n", num);

    for (i = 1; i <= num; i++) {
        square = i * i;
        printf("%d ", square);
    }

    printf("\n");

    return 0;
}