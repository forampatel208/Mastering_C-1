/* Program: nested_conditions.c
   Demonstrates the use of nested if statements in C.
*/

#include <stdio.h> // Include standard input-output library

int main() {
    int age; // Declare an integer variable to store the user's age
    char gender; // Declare a character variable to store the user's gender

    // Prompt the user to enter their age
    printf("Enter your age: ");
    scanf("%d", &age); // Read the user's input and store it in 'age'

    // Prompt the user to enter their gender
    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender); // Read the user's input and store it in 'gender'. Note the space before %c to consume newline

    // Check if the user is an adult
    if (age >= 18) {
        // Check if the user is male
        if (gender == 'M' || gender == 'm') {
            printf("You are an adult male.\n"); // Print message for an adult male
        }
        // Check if the user is female
        else if (gender == 'F' || gender == 'f') {
            printf("You are an adult female.\n"); // Print message for an adult female
        }
        // Handle invalid gender input
        else {
            printf("Invalid gender input.\n"); // Inform user of invalid input
        }
    }
    // If the user is not an adult
    else {
        // Check if the user entered a valid age
        if (age > 0) {
            printf("You are a minor.\n"); // Print message for a minor
        }
        // Handle invalid age input
        else {
            printf("Invalid age input.\n"); // Inform user of invalid input
        }
    }

    return 0; // End of the program
}
