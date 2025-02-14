/* Program: file_open_close.c
   Demonstrates opening and closing files.
*/

#include <stdio.h>

int main() {
    FILE *filePtr;

    // Opening a file in write mode
    filePtr = fopen("example.txt", "w");
    if (filePtr == NULL) {
        printf("Error: Unable to open the file.\n");
        return 1;  // Exit with error code
    }
    printf("File opened successfully in write mode.\n");

    // Closing the file
    fclose(filePtr);
    printf("File closed successfully.\n");

    return 0;
}
