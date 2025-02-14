/* Program: while_loop.c
   Demonstrates the use of while loop in C.
*/

#include <stdio.h> // Include standard input-output library

int main() {
    int i = 1; // Initialize the counter variable 'i'

    // Use a while loop to print numbers from 1 to 10
    while (i <= 10) {
        printf("%d ", i); // Print the current value of 'i'
        i++; // Increment 'i' after each iteration
    }
    printf("\n"); // Print a newline after the loop finishes

    return 0; // End of the program
}
