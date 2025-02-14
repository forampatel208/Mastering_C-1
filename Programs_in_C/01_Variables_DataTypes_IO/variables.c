/*
 * Purpose: Demonstrates the declaration, initialization, and usage of variables in C.
 */

#include <stdio.h> // Standard input/output library

int main() {
    // <-------------------- Variable Declaration -------------------->
    // Declare variables without assigning values
    int number;      // Integer variable
    char percentage; // Character variable

    // Declare and initialize variables in one step
    int num = 10;           // Integer initialized to 10
    char percent = '%';     // Character initialized to '%'

    // <-------------------- Inputting Values -------------------->
    // Prompt user to enter a value for the integer variable
    printf("Enter a number: ");
    scanf("%d", &number);   // `%d` specifies integer input; `&` stores input in the variable's memory location

    // <-------------------- Outputting Values -------------------->
    // Print the value entered by the user
    printf("The value of 'number' is: %d\n", number);

    // Print the pre-initialized variables
    printf("The value of 'num' is: %d\n", num);
    printf("The value of 'percent' is: %c\n", percent);

    return 0; // Indicate successful execution
}
