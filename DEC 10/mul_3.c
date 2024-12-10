#include <stdio.h>

int main() {
    int num = 2;
    int i;

    for (i = 0; i < 10; i++) {
        printf("%d ", num);
        num *= 3;
    }

    printf("\n");

    return 0;
}