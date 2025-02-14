/* Program: multi_dimensional_arrays.c
   Demonstrates the use of 2D arrays.
*/

#include <stdio.h>

int main() {
    // Declaring a 2D array
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6} 
    }; 

    // Printing the 2D array
    printf("2D Array Elements:\n");
    for (int i = 0; i < 2; i++) { // Looping through rows
        for (int j = 0; j < 3; j++) { // Looping through columns
            printf("matrix[%d][%d] = %d\n", i, j, matrix[i][j]);
        }
    }

    return 0;
}