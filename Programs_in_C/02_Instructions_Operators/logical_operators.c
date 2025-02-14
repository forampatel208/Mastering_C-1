/*
 * Purpose: Demonstrates logical operators in C.
 */

#include <stdio.h>

int main() {
    int a = 1, b = 0;

    // -------------------- Logical Operations --------------------
    printf("Logical AND (a && b): %d\n", a && b); //AND returns 1 when both inputs are 1

    printf("Logical OR (a || b): %d\n", a || b); //OR returns 0 when both inputs are 0
    
    printf("Logical NOT (!a): %d\n", !a); // Logical NOT returns 0 if value was 1 and vise-versa
    

    return 0;
}
