// Implement a dynamic array that can grow during runtime.
#include <stdio.h>
#include <stdlib.h>

// Dynamic Array structure
typedef struct {
    int *data;   // Pointer to the array
    int size;    // Current number of elements
    int capacity; // Total capacity of the array
} DynamicArray;

// Initialize the dynamic array
void initializeArray(DynamicArray *arr, int initialCapacity) {
    arr->data = (int *)malloc(initialCapacity * sizeof(int)); // Allocate memory
    arr->size = 0;       // Start with 0 elements
    arr->capacity = initialCapacity; // Set initial capacity
}

// Add an element to the dynamic array
void addElement(DynamicArray *arr, int element) {
    // If the array is full, double its capacity
    if (arr->size == arr->capacity) {
        arr->capacity *= 2; // Double the capacity
        arr->data = (int *)realloc(arr->data, arr->capacity * sizeof(int));
        if (!arr->data) {
            printf("Memory allocation failed!\n");
            exit(1);
        }
    }
    arr->data[arr->size++] = element; // Add element and increment size
    printf("Added %d to the array.\n", element);
}

// Display all elements of the dynamic array
void displayArray(DynamicArray *arr) {
    if (arr->size == 0) {
        printf("The array is empty.\n");
        return;
    }
    printf("Array elements:\n");
    for (int i = 0; i < arr->size; i++) {
        printf("%d ", arr->data[i]);
    }
    printf("\n");
}

// Free memory allocated for the dynamic array
void freeArray(DynamicArray *arr) {
    free(arr->data); // Free the allocated memory
    arr->data = NULL;
    arr->size = 0;
    arr->capacity = 0;
    printf("Array memory freed.\n");
}

// Main function
int main() { 
    DynamicArray arr;
    int initialCapacity = 2; // Initial capacity of the array

    // Initialize the array
    initializeArray(&arr, initialCapacity);

    int choice, value;

    while (1) {
        printf("\nDynamic Array Menu:\n");
        printf("1. Add Element\n");
        printf("2. Display Array\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to add: ");
                scanf("%d", &value);
                addElement(&arr, value);
                break;
            case 2:
                displayArray(&arr);
                break;
            case 3:
                freeArray(&arr);
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}