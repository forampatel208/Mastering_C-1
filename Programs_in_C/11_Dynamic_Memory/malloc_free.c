/* 
   Demonstrates the use of malloc and free.
*/

#include <stdio.h>
#include <stdlib.h> // For malloc and free

int main() {
    int *ptr;
    int n, i;

    // Taking size input from user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocating memory dynamically using malloc
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Memory allocated successfully for %d integers.\n", n);

    // Inputting and displaying elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }
    printf("You entered: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Freeing allocated memory
    free(ptr);
    printf("Memory deallocated successfully.\n");

    return 0;
}
