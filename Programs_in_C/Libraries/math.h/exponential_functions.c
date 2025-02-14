#include <stdio.h>
#include <math.h>

int main() {
    double num;

    // Exponential calculation
    printf("Enter a number to find its exponential (e^x): ");
    scanf("%lf", &num);
    printf("e^%.2lf = %.2lf\n", num, exp(num));

    // Natural logarithm calculation
    printf("Enter a number to find its natural logarithm (ln(x)): ");
    scanf("%lf", &num);
    if (num <= 0) {
        printf("Natural logarithm is undefined for non-positive numbers.\n");
    } else {
        printf("ln(%.2lf) = %.2lf\n", num, log(num));
    }

    // Base-10 logarithm calculation
    printf("Enter a number to find its base-10 logarithm (log10(x)): ");
    scanf("%lf", &num);
    if (num <= 0) {
        printf("Base-10 logarithm is undefined for non-positive numbers.\n");
    } else {
        printf("log10(%.2lf) = %.2lf\n", num, log10(num));
    }

    return 0;
}
