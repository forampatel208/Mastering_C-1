//Convert a decimal number to binary.
#include<stdio.h>

int main() {
    int decimal, binary = 0, remainder, i = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        remainder = decimal % 2;
        binary += remainder*i;
        decimal /= 2;
        i *= 10;
    }
    printf("Binary representation: %d", binary);
    return 0;
}