#include<stdio.h>
#include<string.h>

int main() {
    char oldStr[] = "Hello World!";
    char newStr[] = "Goodbye Universe!";

    strcat(oldStr, newStr); //both strings joined together without space in between
    puts(oldStr); //Prints the updated oldStr
}