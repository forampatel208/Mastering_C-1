#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("student.txt", "w");

    char name[100];
    printf("Enter student name: ");
    scanf("%s", name);

    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    float cgpa;
    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    fprintf(fptr, "Name: %s\nAge: %d\nCGPA: %f\n", name, age, cgpa);
    fclose(fptr);
}