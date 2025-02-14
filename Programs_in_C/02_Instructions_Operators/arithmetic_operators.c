/*
 * Purpose: Demonstrates arithmetic operations in C.
 */

#include <stdio.h>

int main() {
    int a = 10, b = 3;
    
    // -------------------- Arithmetic Operations --------------------
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division: %d / %d = %d\n", a, b, a / b);
    printf("Modulus: %d %% %d = %d\n", a, b, a % b); // `%%` escapes the `%` symbol for modulus

    return 0;
}
