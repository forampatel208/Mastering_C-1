//Find the length of a string without using `strlen`.
#include <stdio.h>
#include <string.h>

int main () {
    //initialize variables
    char str[100];
    int length = 0;

    //Accept input
    printf ("Enter a string : ");
    scanf ("%s", str);

    //initialize for loop
    for( int i = 0; str[i] != '\0'; i++ ) {
        length++; //count number of characters
    }
    printf("length: %d", length);
    return 0;
}