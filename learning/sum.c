#include<stdio.h>

//recursion

int fact(int n);

int main () {
    printf ("factorial is : %d", fact(5));
    return 0;
}

int fact(int n) {
    if (n == 0) {
        return 1;
    }
    int factNum1 = fact(n-1);
    int factN = n * factNum1;
    return factN;
}