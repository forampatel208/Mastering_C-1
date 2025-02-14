/* Program: scope_of_variables.c
   Demonstrates the scope of variables in functions.
*/

#include <stdio.h> // Include the standard input-output library

// Global variable declaration
int globalVar = 10;

void display() {
    // Local variable inside the display function
    int localVar = 20;

    // Printing both local and global variables
    printf("Inside display function:\n");
    printf("Local variable: %d\n", localVar);
    printf("Global variable: %d\n", globalVar);
}

int main() {
    // Local variable in main function
    int mainVar = 30;

    // Printing the local variable from main function
    printf("Inside main function:\n");
    printf("Main function local variable: %d\n", mainVar);

    // Calling the display function
    display();

    // Printing the global variable in main
    printf("\nGlobal variable in main function: %d\n", globalVar);

    return 0;
}
