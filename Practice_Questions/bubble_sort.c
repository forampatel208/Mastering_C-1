// Implement the bubble sort algorithm to sort an array in ascending order.  
#include <stdio.h> 

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, n);
    
    // Print the sorted array
    printf("Sorted array in ascending order:\n");
    for (int i=0; i < n; ++i)
        printf("%d ", arr[i]);
    return 0;
}