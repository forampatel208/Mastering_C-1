/* Program: file_copy.c
   Copies content from one file to another.
*/

#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char ch;

    // Opening source file in read mode
    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("Error: Source file not found.\n");
        return 1;
    }

    // Opening destination file in write mode
    destFile = fopen("destination.txt", "w");
    if (destFile == NULL) {
        printf("Error: Unable to create destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copying contents character by character
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully.\n");

    // Closing both files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}