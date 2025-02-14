/* Program: recursion_example.c
   Demonstrates recursion in C by calculating the factorial of a number.
*/

#include <stdio.h> // Include the standard input-output library

// Function declaration for factorial calculation
int factorial(int n);

int main() {
    int num = 5;

    // Calling the factorial function
    int result = factorial(num);

    // Printing the result of factorial calculation
    printf("Factorial of %d is %d\n", num, result);

    return 0;
}

// Function definition for calculating factorial recursively
int factorial(int n) {
    if (n == 0) // Base case: factorial of 0 is 1
        return 1;
    else
        return n * factorial(n - 1); // Recursive call
}
