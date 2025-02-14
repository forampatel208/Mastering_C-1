#include<stdio.h>

void calcuPrice(float value);

int main() {

    float value = 100.0;
    calcuPrice(value);
    return 0;
}

void calcuPrice(float value) {
    value = value + (0.18 * value);
    printf("final price is : %f", value);
}