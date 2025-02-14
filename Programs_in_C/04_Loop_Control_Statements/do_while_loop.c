/* Program: do_while_loop.c
   Demonstrates the use of do-while loop in C, where the condition is checked after execution.
*/

#include <stdio.h> // Include standard input-output library

int main() {
    int i = 1; // Initialize the counter variable 'i'

    // Use a do-while loop to print numbers from 1 to 10
    do {
        printf("%d ", i); // Print the current value of 'i'
        i++; // Increment 'i' after each iteration
    } while (i <= 10); // Condition checked after the loop body is executed

    printf("\n"); // Print a newline after the loop finishes

    return 0; // End of the program
}
