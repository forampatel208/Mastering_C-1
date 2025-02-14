/* Program: string_functions.c
   Demonstrates the use of standard string functions.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";

    // Finding the length of a string
    printf("Length of str1: %lu\n", strlen(str1));

    // Copying one string into another
    strcpy(str2, str1); // str1 is copied into str2, str1 remains unchanged
    printf("After strcpy, str2: %s\n", str2);
    printf("After strcpy, str1: %s\n", str1);

    // Comparing two strings
    int result = strcmp(str1, str2);
    printf("Comparison result: %d\n", result);

    return 0;
}