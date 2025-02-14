#include<stdio.h>

int main () {
    int a, b, sum;

    printf("Enter Value of a:");
    scanf("%d", &a);

    printf("Enter Value of b:");
    scanf("%d", &b);

    sum = a + b;

    printf("Sum of a and b is %d", sum);
    return 0;
}