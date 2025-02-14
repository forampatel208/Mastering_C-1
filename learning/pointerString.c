#include<stdio.h>

int main() {
    char *canChange = "Hello World";
    puts(canChange);
    canChange = "Hello!";
    puts(canChange);

    char canNotChange[] = "Hello World";
    puts(canNotChange);
    //canNotChange = "Hello";
// Strings declare through the method of Array can not be changed. 
// Strings declare through the method of Pointers can be changed.

}