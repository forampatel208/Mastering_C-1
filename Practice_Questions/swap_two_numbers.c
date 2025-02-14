//Swap two numbers using both a temporary variable and without using one.

#include <stdio.h> 

void swap(int a, int b);
int main() {
    //using temporary variable
    int a = 1, b = 2, temp;
    printf("Before swapping => a = %d, b = %d\n", a, b); //before swapping
    swap(a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping using a temporary variable => a = %d, b = %d\n", a, b); //after swapping
}

void swap(int a, int b) {
    //without using temporary variable
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping without using a temporary variable => a = %d, b = %d\n ", a, b); //after swapping using arithmetic operations
}