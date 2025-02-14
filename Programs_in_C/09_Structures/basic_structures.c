/* Program: basic_structures.c
   Demonstrates defining and using structures.
*/

#include <stdio.h>

// Defining a structure for a student
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    // Creating and initializing a structure variable
    struct Student student1;

    // Inputting details for the student
    printf("Enter student ID: ");
    scanf("%d", &student1.id);
    printf("Enter student name: ");
    scanf("%s", student1.name);
    printf("Enter student marks: ");
    scanf("%f", &student1.marks);

    // Printing the student's details
    printf("\nStudent Details:\n");
    printf("ID: %d\n", student1.id);
    printf("Name: %s\n", student1.name);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}