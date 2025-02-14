/* Program: switch_case.c
   Demonstrates the use of the switch-case statement in C.
*/

#include <stdio.h> // Include standard input-output library

int main() {
    int choice; // Declare an integer variable to store user's choice

    // Display the menu options to the user
    printf("Menu:\n");
    printf("1. Print Hello\n");
    printf("2. Print Welcome\n");
    printf("3. Print Goodbye\n");

    // Prompt the user to enter their choice
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice); // Read the user input and store it in the variable 'choice'

    // Use a switch-case statement to determine the output based on the user's choice
    switch (choice) {
        case 1: // If choice is 1
            printf("Hello!\n"); // Print "Hello"
            break; // Exit the switch block

        case 2: // If choice is 2
            printf("Welcome!\n"); // Print "Welcome"
            break; // Exit the switch block

        case 3: // If choice is 3
            printf("Goodbye!\n"); // Print "Goodbye"
            break; // Exit the switch block
            
        default: // If the choice does not match any case
            printf("Invalid choice. Please select between 1 and 3.\n"); // Inform the user of invalid input
    }

    return 0; // End of the program
}