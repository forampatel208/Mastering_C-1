//Find all prime numbers within a given range.

#include<stdio.h>
int main() {
    int start, end, flag;
    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("\nPrime numbers between %d and %d are : ", start, end);
 
    for (int i = start; i <= end; i++) {
    //skip 0 and 1 as they are neither prime nor compsite
        if ( i == 1 || i == 0 ) 
            continue;

            //flag the variable to tell if 'i' is prime or not
            flag = 1;

            for (int j = 2; j <= i / 2; ++j) {
                if (i % j == 0) {
                    flag = 0;
                    break;
                }
            }
            //flag = 1 means i is prime and flag = 0 means i is composite
            if (flag == 1)
                printf("%d, ", i);
    }
    return 0;
}