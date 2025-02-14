//Count the number of words in a string.           
#include <stdio.h>
#include <ctype.h>  // For isspace() function

int countWords(const char *str) {
    int word_count = 0; // Counter for words
    int in_word = 0;    // Flag to check if inside a word

    while (*str != '\0') {
        if (!isspace(*str)) { // If the character is not space
            if (!in_word) {   // If we are not already in a word
                word_count++; // Increment word count
                in_word = 1;  // Mark that we are inside a word
            }
        } else {
            in_word = 0;      // Mark that we are outside a word
        }
        str++; // Move to the next character
    }

    return word_count; // Return the total count
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read the input string

    int result = countWords(str); // Call the function
    printf("Number of words in the string: %d\n", result);

    return 0;
}
