/* Program: file_read_write.c
   Demonstrates basic file reading and writing.
*/

#include <stdio.h>

int main() {
    FILE *filePtr;
    char data[100];

    // Writing to a file
    filePtr = fopen("example.txt", "w");
    if (filePtr == NULL) {
        printf("Error: Unable to open the file for writing.\n");
        return 1;
    }
    fprintf(filePtr, "Hello, File Handling in C!\n");
    fclose(filePtr);

    // Reading from a file
    filePtr = fopen("example.txt", "r");
    if (filePtr == NULL) {
        printf("Error: Unable to open the file for reading.\n");
        return 1;
    }
    while (fgets(data, sizeof(data), filePtr) != NULL) {
        printf("Read from file: %s", data);
    }
    fclose(filePtr);

    return 0;
}
