/* Program: nested_structures.c
   Demonstrates the use of nested structures.
*/

#include <stdio.h>

// Defining nested structures
struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    int id;
    char name[50];
    struct Date dob;  // Nested structure for date of birth
};

int main() {
    struct Student student1;

    // Inputting details for the student
    printf("Enter student ID: ");
    scanf("%d", &student1.id);
    printf("Enter student name: ");
    scanf("%s", student1.name);
    printf("Enter student DOB (dd mm yyyy): ");
    scanf("%d %d %d", &student1.dob.day, &student1.dob.month, &student1.dob.year);

    // Printing the student's details
    printf("\nStudent Details:\n");
    printf("ID: %d\n", student1.id);
    printf("Name: %s\n", student1.name);
    printf("Date of Birth: %02d-%02d-%d\n", student1.dob.day, student1.dob.month, student1.dob.year);

    return 0;
}