/* Program: array_basics.c
   Demonstrates initializing and using arrays.
*/

#include <stdio.h>

int main() {
    // Declaring and initializing an array
    int numbers[5] = {10, 20, 30, 40, 50}; //here 5 is the size of the array

    // Printing the elements of the array
    printf("Elements of the array:\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}
