#include<stdio.h>
#include<string.h>

void slice(char str[], int n, int m);

int main() {
    char str[] = "HelloWorld";
    slice(str, 3, 6);
}

void slice(char str[], int n, int m) {
    char newStr[100];
    int j = 0;
    for(int i=n, j=0; i<= m; i++, j++) { //Assume n and m are valid values
        newStr[j] = str[i];
    }
    newStr[j] = '\0'; // Adding null character at the end of the string
    puts(newStr);
}