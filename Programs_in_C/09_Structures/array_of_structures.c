/* Program: array_of_structures.c
   Demonstrates using arrays of structures.
*/

#include <stdio.h>

// Defining a structure
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student students[3];  // Array of structures

    // Inputting details for multiple students
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Printing the details of all students
    printf("\nAll Student Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}