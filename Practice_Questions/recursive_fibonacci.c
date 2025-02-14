//Calculate Fibonacci numbers using recursion.       

#include <stdio.h>

int fibo(int n);

int main() {
    int num;
    printf("Enter a Fibonacci number: ");
    scanf("%d", &num);

    int fib = fibo(num);
    printf("Fibonacci number [%d]: %d\n", num, fib);
    
    return 0;
}

int fibo(int n) {
    if (n <= 1) {
        return n;
    }
    else {
        return fibo(n-1) + fibo(n-2);
    }
}