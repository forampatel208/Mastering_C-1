#include<stdio.h>
#include<string.h>

int main() {
    char oldStr[] = "Hello World!";
    char newStr[] = "Goodbye Universe!";

    strcpy(oldStr, newStr); //newstr value is copied to oldStr
    puts(oldStr); //Prints the updated oldStr
}