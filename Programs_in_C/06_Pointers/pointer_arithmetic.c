/* Program: pointer_arithmetic.c
   Demonstrates pointer arithmetic in C.
*/

#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50}; // Declare an array
    int *ptr = arr;                   // Pointer to the first element of the array

    // Accessing array elements using pointers
    printf("Array elements using pointers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d (Address: %p)\n", i, *(ptr + i), (ptr + i));
    }

    // Pointer arithmetic
    printf("\nPointer Arithmetic:\n");
    printf("Initial pointer address: %p\n", ptr);
    ptr++; // Increment pointer
    printf("Address after ptr++: %p\n", ptr);
    ptr--; // Decrement pointer
    printf("Address after ptr--: %p\n", ptr);

    return 0;
}
