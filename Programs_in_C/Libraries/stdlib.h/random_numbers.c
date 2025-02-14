#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i;

    // Seed the random number generator
    srand(time(NULL));

    printf("Enter the number of random numbers to generate: ");
    scanf("%d", &n);

    printf("Random numbers:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", rand() % 100); // Generate random numbers in the range [0, 99]
    }
    printf("\n");

    return 0;
}
