/* Program: structures_and_functions.c
   Demonstrates passing structures to functions.
*/

#include <stdio.h>

// Defining a structure
struct Student {
    int id;
    char name[50];
    float marks;
};

// Function to print student details
void printStudent(struct Student s) {
    printf("\nStudent Details:\n");
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student student1;

    // Inputting details for the student
    printf("Enter student ID: ");
    scanf("%d", &student1.id);
    printf("Enter student name: ");
    scanf("%s", student1.name);
    printf("Enter student marks: ");
    scanf("%f", &student1.marks);

    // Passing structure to a function
    printStudent(student1);

    return 0;
}