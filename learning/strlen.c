#include<stdio.h>

void printString (char arr[]);
int countLength (char arr[]);

int main () {
    char name[100];
    fgets(name, 100, stdin);
    printf("length is: %d", countLength(name));
    return 0;
}

void printString (char arr[]) {
    for(int i = 0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
}

int countLength (char arr[]) {
    int length = 0;
    for(int i = 0; arr[i] != '\0'; i++){
    length ++;
    }
    return length-1;
}

