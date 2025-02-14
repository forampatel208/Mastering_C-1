/* Program: function_parameters.c
   Demonstrates passing parameters by value and by reference in C.
*/

#include <stdio.h> // Include the standard input-output library

// Function declarations
void byValue(int a); // Passing by value
void byReference(int *a); // Passing by reference

int main() {
    int num = 10;

    // Passing parameter by value
    printf("Before byValue function: %d\n", num);
    byValue(num);  // The value of 'num' will not change after this call
    printf("After byValue function: %d\n", num);

    // Passing parameter by reference
    printf("\nBefore byReference function: %d\n", num);
    byReference(&num);  // The value of 'num' will change after this call
    printf("After byReference function: %d\n", num);

    return 0;
}

// Function definition for passing by value
void byValue(int a) {
    a = 20; // This change is local to the function
    printf("Inside byValue function: %d\n", a);
}

// Function definition for passing by reference
void byReference(int *a) {
    *a = 30; // The change is reflected outside the function
    printf("Inside byReference function: %d\n", *a);
}
