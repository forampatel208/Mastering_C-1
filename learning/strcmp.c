#include<stdio.h>
#include<string.h>
//Compares two strings and returns a value that indicates whether the first string is less than, equal to, or greater than the second string.
int main() {
    char oldStr[] = "Apple";
    char newStr[] = "Banana";

    printf("%d",strcmp(oldStr, newStr)); //
// 0 -> Strings are equal, -1 -> oldStr is less than newStr, 1 -> oldStr is greater than newStr

}