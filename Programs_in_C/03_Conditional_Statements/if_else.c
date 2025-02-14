/* Program: if_else.c
   Demonstrates the use of if, else if, and else statements in C.
*/

#include <stdio.h> 
int main() {
    int number; 

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number); // Read the user input and store it in the variable 'number'

    // Check if the number is positive
    if (number > 0) {
        printf("The number is positive.\n"); // Print if the condition is true
    }
    // Check if the number is negative
    else if (number < 0) {
        printf("The number is negative.\n"); // Print if the condition is true
    }
    // If the number is neither positive nor negative, it must be zero
    else {
        printf("The number is zero.\n"); // Print if all above conditions are false
    }

    return 0; // End of the program
}
