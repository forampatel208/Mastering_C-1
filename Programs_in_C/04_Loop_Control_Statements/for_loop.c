/* Program: for_loop.c
   Demonstrates the basic usage of for loop in C.
*/

#include <stdio.h> // Include standard input-output library

int main() {
    int i; // Declare an integer variable to be used as the loop counter

    // Use a for loop to print numbers from 1 to 10
    for (i = 1; i <= 10; i++) { // it can also be written as for(int i = 1; i <= 10; i++) if the loop counter is not pre-declared
        printf("%d ", i); // Print the current value of 'i'
    }
    printf("\n"); // Print a newline after the loop finishes

    return 0; // End of the program
}
