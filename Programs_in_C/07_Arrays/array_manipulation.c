/* Program: array_manipulation.c
   Demonstrates basic array operations like finding the maximum element.
*/

#include <stdio.h>

int main() {
    int arr[5] = {12, 45, 23, 89, 34}; // Declaring and initializing an array
    int max = arr[0];                 // Initializing max with the first element

    // Finding the maximum element in the array
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger element is found
        }
    }

    // Printing the maximum element
    printf("The maximum element in the array is: %d\n", max);

    return 0;
}

