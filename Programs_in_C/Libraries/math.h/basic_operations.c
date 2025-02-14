#include <stdio.h>
#include <math.h>

int main() {
    double num, power, result;

    // Power calculation
    printf("Enter a base number and its power: ");
    scanf("%lf %lf", &num, &power);
    result = pow(num, power);
    printf("%.2lf raised to the power %.2lf is %.2lf\n", num, power, result);

    // Square root calculation
    printf("Enter a number to find its square root: ");
    scanf("%lf", &num);
    if (num < 0) {
        printf("Square root of a negative number is undefined in real numbers.\n");
    } else {
        result = sqrt(num);
        printf("Square root of %.2lf is %.2lf\n", num, result);
    }

    // Absolute value
    printf("Enter a number to find its absolute value: ");
    scanf("%lf", &num);
    result = fabs(num);
    printf("Absolute value of %.2lf is %.2lf\n", num, result);

    return 0;
}
