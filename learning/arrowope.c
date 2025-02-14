#include<stdio.h>

struct student {
    int roll;
    char name[500];
    float cgpa;
};

int main() {
    struct student s1 = { 5484, "foram", 9.2};

    struct student *ptr = &s1;
    printf("student.roll with ptr = %d\n", (*ptr).roll);

    printf("student->roll = %d\n", ptr->roll);
    return 0;
}