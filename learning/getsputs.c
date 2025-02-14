#include<stdio.h>

int main() {
    // char firstName[50];
    // printf("What's your firstName: ");
    // scanf("%s", firstName);

    // printf("Your first name is %s", firstName);

    char fullName[100];
    fgets(fullName, 100, stdin);
    puts(fullName);
}