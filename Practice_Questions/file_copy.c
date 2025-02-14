// Copy the contents of one file to another.
#include <stdio.h>
#include <stdlib.h>

void copyFile(const char* sourceFile, const char* destinationFile) {
    FILE *source, *destination;
    char ch;

    // Open the source file in read mode
    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Error: Could not open source file %s.\n", sourceFile);
        exit(1);
    }

    // Open the destination file in write mode
    destination = fopen(destinationFile, "w");
    if (destination == NULL) {
        printf("Error: Could not open destination file %s.\n", destinationFile);
        fclose(source);
        exit(1);
    }

    // Read from source file and write to destination file
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully from %s to %s.\n", sourceFile, destinationFile);

    // Close both files
    fclose(source);
    fclose(destination);
}

int main() {
    char sourceFile[100], destinationFile[100];

    printf("Enter the name of the source file: ");
    scanf("%s", sourceFile);

    printf("Enter the name of the destination file: ");
    scanf("%s", destinationFile);

    copyFile(sourceFile, destinationFile);

    return 0;
}