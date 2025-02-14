/* 
   Creates arrays dynamically at runtime.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int size, i;

    // Taking the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Allocating memory dynamically for the array
    array = (int *)malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Inputting array elements
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Displaying array elements
    printf("Array elements are: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Freeing memory
    free(array);
    printf("Memory deallocated successfully.\n");

    return 0;
}