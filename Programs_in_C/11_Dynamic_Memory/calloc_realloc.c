/* 
   Demonstrates calloc and realloc usage.
*/

#include <stdio.h>
#include <stdlib.h> // For calloc, realloc, and free

int main() {
    int *ptr;
    int n, i, new_size;

    // Allocating memory using calloc
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int)); // Memory initialized to zero
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Memory allocated and initialized to zero for %d integers.\n", n);

    // Displaying default values
    printf("Initial values: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Resizing the memory block using realloc
    printf("Enter the new size: ");
    scanf("%d", &new_size);
    ptr = (int *)realloc(ptr, new_size * sizeof(int));
    if (ptr == NULL) {
        printf("Reallocation failed!\n");
        return 1;
    }
    printf("Memory resized successfully to %d integers.\n", new_size);

    // Freeing memory
    free(ptr);
    printf("Memory deallocated successfully.\n");

    return 0;
}
