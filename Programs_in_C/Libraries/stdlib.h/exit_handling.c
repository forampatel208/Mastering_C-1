#include <stdio.h>
#include <stdlib.h>

void goodbyeMessage() {
    printf("Program is exiting. Goodbye!\n");
}

int main() {
    int choice;

    // Register the exit function
    atexit(goodbyeMessage);

    printf("Enter 1 to continue, 0 to exit: ");
    scanf("%d", &choice);

    if (choice == 0) {
        printf("Exiting the program using exit().\n");
        exit(0);
    }

    printf("Program continues...\n");

    return 0;
}
