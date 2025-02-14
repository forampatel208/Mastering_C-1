/*
 * Purpose: Demonstrates relational operators in C.
 */

#include <stdio.h>

int main() {
    int x = 5, y = 10;

    // -------------------- Relational Operations --------------------
    printf("Is %d equal to %d? : %d\n", x, y, x == y);
    printf("Is %d not equal to %d? : %d\n", x, y, x != y);
    printf("Is %d greater than %d? : %d\n", x, y, x > y);
    printf("Is %d less than %d? : %d\n", x, y, x < y);
    printf("Is %d greater than or equal to %d? : %d\n", x, y, x >= y);
    printf("Is %d less than or equal to %d? : %d\n", x, y, x <= y);
//0 represents false and 1 represents true
    return 0;
}