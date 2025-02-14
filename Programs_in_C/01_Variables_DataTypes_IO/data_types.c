/*
 * Purpose: Demonstrates the usage of different data types and their sizes in C.
 */

#include <stdio.h>

int main() {
    // -------------------- Data Type Examples --------------------
    int integer = 100;            // Integer data type
    float floating_point = 3.14;  // Float data type
    double double_precision = 3.14159265359; // Double data type
    char character = 'A';         // Character data type

    // -------------------- Displaying Data --------------------
    printf("Integer value: %d\n", integer);
    printf("Float value: %.2f\n", floating_point);  // Display with 2 decimal places
    printf("Double value: %.10lf\n", double_precision); // Display with 10 decimal places
    printf("Character value: %c\n", character);

    // -------------------- Size of Each Data Type --------------------
    printf("\nSizes of different data types in bytes:\n");
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu byte\n", sizeof(char));

    return 0;
}