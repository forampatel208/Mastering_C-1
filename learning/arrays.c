#include<stdio.h>

int main() {
    float items[3];

    printf("Enter item1 marks: ");
    scanf("%f", &items[0]);

    printf("Enter item2 marks: ");
    scanf("%f", &items[1]);

    printf("Enter item3 marks: ");
    scanf("%f", &items[2]);

    printf("Total price1 : %f\n", items[0]+(0.18*items[0]));
    printf("Total price2 : %f\n", items[1]+(0.18*items[1]));
    printf("Total price3 : %f\n", items[2]+(0.18*items[2]));

    return 0;
}