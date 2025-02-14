/* Program: basic_functions.c
   Demonstrates how to define and use functions in C.
*/

#include <stdio.h> // Include the standard input-output library

// Function declaration
void greet(); // Function prototype, here void => function do not return anything, also it do not take any parameters(inputs)

int main() {
    // Calling the greet function
    greet();
    return 0;
}

// Function definition
void greet() {
    printf("Hello, Welcome to Functions in C!\n"); // Printing a welcome message
}
