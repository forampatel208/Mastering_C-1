#include<stdio.h>
#include<math.h>

float squArea(float side);
float circleArea(float radi);
float rectArea(float a, float b);

int main (void) {
    float a = 5.0, b = 10.0;

    printf("area of rect: %f", rectArea(a, b));

    return 0;
}

float squArea(float side) {
    return side * side;
}

float circleArea(float radi) {
    return 3.14 * radi * radi;
}

float rectArea(float a, float b) {
    return a * b;
}