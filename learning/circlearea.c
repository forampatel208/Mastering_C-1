#include<stdio.h>
//area of circle
int main() {
    float radius;

    printf("Enter Side of Circle: ");
    scanf("%f", &radius);

    printf("Area of Circle = %f", radius*3.14*radius);
    return 0;
}