/* Program: palindrome_check.c
   Checks if a given string is a palindrome.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int length, isPalindrome = 1;

    // Taking input from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Finding the length of the string
    length = strlen(str);

    // Checking if the string is a palindrome
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}