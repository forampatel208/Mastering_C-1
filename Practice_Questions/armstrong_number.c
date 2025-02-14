//Check if a number is an Armstrong 
#include <stdio.h>
#include <math.h>
int main() {
    int num, sum = 0;
    printf("enter a number: ");
    scanf("%d", &num);

    int originalNum = num;
    int digitCount = 0;

    // Count the number of digits
    while (num != 0) {
        num /= 10;
        digitCount++;
    }

    //reset num to the original value for further processing
    num = originalNum;
    // Calculate the sum of the cube of each digit
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, digitCount);
        num /= 10;
    }

    // check if sum is equal to original number
    if (sum == originalNum) 
        printf("%d is an Armstrong number\n", originalNum);
    else
        printf("%d is not an Armstrong number\n", originalNum);

    return 0;
}