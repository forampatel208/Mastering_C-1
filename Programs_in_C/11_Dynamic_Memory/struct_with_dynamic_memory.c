/*
    Using dynamic memory allocation with structures.
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student *students;
    int n, i;

    // Taking number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Allocating memory dynamically for n students
    students = (struct Student *)malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Inputting student data
    for (i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Displaying student data
    printf("\nStudent Details:\n");
    for (i = 0; i < n; i++) {
        printf("Name: %s, Age: %d, Marks: %.2f\n", students[i].name, students[i].age, students[i].marks);
    }

    // Freeing allocated memory
    free(students);
    printf("Memory deallocated successfully.\n");

    return 0;
}