/* Program: nested_loops.c
   Demonstrates the use of nested loops and pattern generation in C.
*/

#include <stdio.h> // Include standard input-output library

int main() {
    int i, j; // Declare two integer variables for loop counters

    // Generate a simple square pattern of stars

    printf("Square pattern of stars:\n");
    for (i = 1; i <= 5; i++) { // Outer loop for rows
        for (j = 1; j <= 5; j++) { // Inner loop for columns
            printf("* "); // Print a star in each column
        }
        printf("\n"); // Move to the next line after each row
    }

    // Generate a right-angled triangle pattern of stars
    printf("\nRight-angled triangle pattern:\n");
    for (i = 1; i <= 5; i++) { // Outer loop for rows
        for (j = 1; j <= i; j++) { // Inner loop for columns
            printf("* "); // Print a star in each column
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0; // End of the program
}
