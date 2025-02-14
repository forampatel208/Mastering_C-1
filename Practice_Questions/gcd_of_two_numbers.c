//Find the GCD of two numbers using the Euclidean algorithm.    
#include<stdio.h>

int main() {
    int a, b, gcd;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    for (int i=1; i <= a && i <= b; ++i) //starting the loop with 1, since a%0 is not defined
    {
        //check if 'i' is factor of both integers
        if (a%i == 0 && b%i == 0)
            gcd = i;   
    }
    printf("G.C.D. of %d and %d is %d", a, b, gcd);

    return 0;
}
