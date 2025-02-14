// Check if a number is a perfect number (sum of divisors equals the number). 

/* If A number 'n' is a perfect number if: 
        - Sum of divisors (excluding n) = n   
*/
// Example: 6 is a perfect number because its divisors are 1, 2, 3, and 1+2+3=6.

#include <stdio.h>

int isPerfectNumber(int n) {
    if (n <= 0) 
        return 0; // Perfect numbers are positive integers

    int sum = 0;

    // Find divisors and calculate their sum
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i; // Add divisor to the sum
        }
    }

    // Check if the sum of divisors equals the number
    return sum == n;
}

int main() {
    int num;

    printf("Enter a number to check if it is a perfect number: ");
    scanf("%d", &num);

    if (isPerfectNumber(num)) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
