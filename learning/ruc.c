#include<stdio.h>

void printHello();
void printBye();

int main() {
    printHello();
    printBye();
    return 0;
}

void printHello() {
    printf("Hello!\n");
}

void printBye() {
    printf("Bye!\n");
}