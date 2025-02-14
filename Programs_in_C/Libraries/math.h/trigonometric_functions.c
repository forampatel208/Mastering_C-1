#include <stdio.h>
#include <math.h>

int main() {
    double angle, radians;

    // Input angle in degrees
    printf("Enter an angle in degrees: ");
    scanf("%lf", &angle);

    // Convert degrees to radians
    radians = angle * M_PI / 180.0;

    // Trigonometric calculations
    printf("sin(%.2lf°) = %.2lf\n", angle, sin(radians));
    printf("cos(%.2lf°) = %.2lf\n", angle, cos(radians));
    printf("tan(%.2lf°) = %.2lf\n", angle, tan(radians));

    // Check for undefined tangent
    if (cos(radians) == 0) {
        printf("tan(%.2lf°) is undefined (division by zero).\n", angle);
    }

    return 0;
}
