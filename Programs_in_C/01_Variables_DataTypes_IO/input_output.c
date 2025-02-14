/*
 * Purpose: Demonstrates input and output operations for different data types in C.
 */

#include <stdio.h>

int main() {
    int num;
    float decimal;
    char character;

    // -------------------- Input --------------------
    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Input a floating-point number
    printf("Enter a float: ");
    scanf("%f", &decimal);

    // Input a character (consume newline left in buffer)
    printf("Enter a character: ");
    scanf(" %c", &character);

    // -------------------- Output --------------------
    printf("\nYou entered:\n");
    printf("Integer: %d\n", num);
    printf("Float: %.2f\n", decimal);
    printf("Character: %c\n", character);

    return 0;
}
