#include<stdio.h>

int main() {
    char ch;
    printf("enter character: ");
    scanf("%s", &ch);

    if(ch >= 'A' && ch <= 'Z') {
        printf("Upper case");
    } 
    else if (ch >= 'a' && ch <= 'z') 
    {
       printf("Lower case");
    }
    else {
        printf("not a english letter");
    }    
}