#include<stdio.h>

float convertTemp(float cels);

int main() {
     printf("far : %f", convertTemp(37));
}

float convertTemp(float cels) {
    float far = cels * (9.0/5.0) + 32;
    return far;
}
