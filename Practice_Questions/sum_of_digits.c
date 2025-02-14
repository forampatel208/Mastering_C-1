//Find the sum of digits of a given number.
#include<stdio.h>

int main() {
    int num, sum = 0, digit;
    printf("Enter the number: ");
    scanf("%d", &num);

    // Calculate the sum of digits
    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    printf("Sum of digits: %d\n", sum);
}