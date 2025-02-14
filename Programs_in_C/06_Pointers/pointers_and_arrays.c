/* Program: pointers_and_arrays.c
   Demonstrates the use of pointers with arrays.
*/

#include <stdio.h>

int main() {
    int arr[3] = {100, 200, 300}; // Declare an array
    int *ptr = arr;              // Pointer pointing to the first element of the array

    // Accessing array elements using pointer dereferencing
    printf("Using Pointers with Arrays:\n");
    for (int i = 0; i < 3; i++) {
        printf("arr[%d]: %d (Using pointer: %d)\n", i, arr[i], *(ptr + i));
    }

    return 0;
}
