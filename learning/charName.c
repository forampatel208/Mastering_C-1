#include<stdio.h>

void printString(char arr[]);

int main() {
    char* firstName = "Pansuriya";
    char* lastName = "Foram";

    printString(firstName);
    printString(lastName);
}

void printString(char arr[]) {
    int i;
    for(i = 0; arr[i] != '\0'; i++) {
        printf("%c\t", arr[i]);
    }
    printf("\n");
}