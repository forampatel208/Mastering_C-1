//Print the multiplication table of a given number.

#include<stdio.h>

void multiplication_table(int num);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    multiplication_table(num);
}

void multiplication_table(int num) {

    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}