/* Program: appending_files.c
   Appends data to an existing file.
*/

#include <stdio.h>

int main() {
    FILE *filePtr;
    char data[100];

    // Opening the file in append mode
    filePtr = fopen("example.txt", "a");
    if (filePtr == NULL) {
        printf("Error: Unable to open the file for appending.\n");
        return 1;
    }

    // Taking input from the user to append to the file
    printf("Enter data to append to the file: ");
    fgets(data, sizeof(data), stdin);

    // Writing data to the file
    fprintf(filePtr, "%s", data);
    printf("Data appended successfully.\n");

    // Closing the file
    fclose(filePtr);

    return 0;
}