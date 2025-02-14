#include<stdio.h>

struct vector {
    int x;
    int y;
};
void calculateSum (struct vector v1, struct vector v2, struct vector sum);
int main() {
    struct vector v1 = {5, 10};
    struct vector v2 = {3, 7};
    struct vector sum = {0};

    calculateSum (v1, v2, sum);
}

void calculateSum (struct vector v1, struct vector v2, struct vector sum) {
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Sum of two vectors is : %di + %dj", sum.x, sum.y); 
}