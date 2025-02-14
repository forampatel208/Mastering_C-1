#include<stdio.h>

int main () {
    char str[100];
    char ch;
    int i = 0;

    while (ch != '\n')
    {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }    
    str[i] = '\0'; // Adding null character at the end of the string
    puts(str);
}
