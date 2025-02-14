/*
 * Purpose: Demonstrates bitwise operators in C.
 */

#include <stdio.h>

int main() {
    int x = 5, y = 3; // Binary: x = 0101, y = 0011

    // -------------------- Bitwise Operations --------------------
    printf("Bitwise AND (x & y): %d\n", x & y); // 0101 & 0011 = 0001

    printf("Bitwise OR (x | y): %d\n", x | y); // 0101 | 0011 = 0111
    
    printf("Bitwise XOR (x ^ y): %d\n", x ^ y); // 0101 ^ 0011 = 0110
    
    printf("Bitwise NOT (~x): %d\n", ~x);    // ~0101 = ...1010 (in 2's complement)
    
    printf("Left Shift (x << 1): %d\n", x << 1); // 0101 << 1 = 1010
    
    printf("Right Shift (x >> 1): %d\n", x >> 1); // 0101 >> 1 = 0010

    return 0;
}
