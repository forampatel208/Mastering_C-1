#include <stdio.h> 
int main () {
    FILE *file;
    file = fopen("Sum.txt", "r");

    int a;
    fscanf(file, "%d", &a);
    int b;
    fscanf(file, "%d", &b);
    fclose(file);

    fopen("Sum.txt", "w");
    fprintf(file, "%d", a+b);
    fclose(file);
}