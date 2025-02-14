/* Program: sorting_arrays.c
   Implements Bubble Sort for sorting an array.
*/

#include <stdio.h>

int main() {
    int arr[5] = {64, 34, 25, 12, 22}; // Declaring and initializing an array
    int n = 5; // Size of the array

    // Bubble Sort algorithm
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) { // Swap if elements are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Printing the sorted array
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
