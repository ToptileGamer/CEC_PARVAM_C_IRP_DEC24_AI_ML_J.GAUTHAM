#include <stdio.h>

int main() {
    int num, i, cube;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        cube = i * i * i;
        printf("%d ", cube);
    }

    printf("\n");

    return 0;
}