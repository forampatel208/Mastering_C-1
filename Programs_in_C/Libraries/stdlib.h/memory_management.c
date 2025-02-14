#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;

    // Dynamic memory allocation using malloc
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int)); // Allocating memory
    if (arr == NULL) {
        printf("Memory allocation failed using malloc.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Freeing the memory
    free(arr);

    // Allocating memory using calloc
    arr = (int *)calloc(n, sizeof(int)); // Allocating memory
    if (arr == NULL) {
        printf("Memory allocation failed using calloc.\n");
        return 1;
    }

    printf("Enter %d integers again:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements after calloc are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Freeing the memory again
    free(arr);

    return 0;
}
