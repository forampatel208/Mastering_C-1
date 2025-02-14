#include<stdio.h>
#include<string.h>

void printString (char arr[]);
int countLength (char arr[]);

int main () {
    char name[] = "Foram Pan";
    int length = strlen(name);
    printf("length is: %d", strlen(name));
    return 0;
}