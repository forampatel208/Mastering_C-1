/* Program: string_concatenation.c
   Concatenates two strings into one.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello, ";
    char str2[50] = "World!";
    char result[100];

    // Concatenating strings using strcat
    strcpy(result, str1);  // Copy str1 into result
    strcat(result, str2);  // Append str2 to result

    // Printing the concatenated string
    printf("Concatenated string: %s\n", result);

    return 0;
}