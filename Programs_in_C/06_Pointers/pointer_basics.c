/* Program: pointer_basics.c
   Demonstrates basic pointer operations in C.
*/

#include <stdio.h>

int main() {
    int num = 10;          // Declare an integer variable
    int *ptr = &num;       // Declare a pointer and assign it the address of 'num'

    // Print the value and address of 'num'
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);

    // Print the value and address using the pointer
    printf("Value via pointer: %d\n", *ptr); // Dereferencing the pointer
    printf("Pointer address: %p\n", ptr);

    // Modify the value of 'num' using the pointer
    *ptr = 20;
    printf("\nAfter modifying via pointer:\n");
    printf("Value of num: %d\n", num);

    return 0;
}
