/*
 * Purpose: Demonstrates assignment operators in C.
 */

#include <stdio.h>

int main() {
    int a = 10;

    // -------------------- Assignment Operations --------------------
    printf("Initial value of a: %d\n", a);

    a += 5; // a = a + 5
    printf("After a += 5, a = %d\n", a);

    a -= 2; // a = a - 2
    printf("After a -= 2, a = %d\n", a);

    a *= 3; // a = a * 3
    printf("After a *= 3, a = %d\n", a);

    a /= 4; // a = a / 4
    printf("After a /= 4, a = %d\n", a);

    a %= 3; // a = a % 3
    printf("After a %%= 3, a = %d\n", a);

    return 0;
}
