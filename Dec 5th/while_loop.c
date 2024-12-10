#include <stdio.h>

int main() {
    int user_input;

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &user_input);

    // Use a for loop to iterate from 1 to the user's number
    for (int i = 1; i <= user_input; i++) {
        printf("%d\n", i);
    }

    return 0;
}