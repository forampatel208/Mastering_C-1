/* Program: pointers_and_functions.c
   Demonstrates passing pointers to functions.
*/

#include <stdio.h>

// Function prototype to update a value using a pointer
void updateValue(int *ptr);

int main() {
    int num = 50;

    // Passing the address of 'num' to the function
    printf("Before function call, num = %d\n", num);
    updateValue(&num); // Passing pointer to the function
    printf("After function call, num = %d\n", num);

    return 0;
}

// Function definition
void updateValue(int *ptr) {
    *ptr = 100; // Updating the value using the pointer
    printf("Inside function, updated value = %d\n", *ptr);
}
