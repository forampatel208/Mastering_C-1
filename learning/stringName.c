#include<stdio.h>

void printString(char arr[]);

int main() {
    char name[50];
    scanf("%s", name);
    printf("Your name is %s", name);
    return 0;
}

// void printString(char arr[]) {
//     int i;
//     for(i = 0; arr[i] != '\0'; i++) {
//         printf("%c\t", arr[i]);
//     }
//     printf("\n");
// }