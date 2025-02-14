#include<stdio.h>
#include<string.h>

typedef struct student {
    int roll;
    char name[500];
    float cgpa;
} stu;


int main() {
    stu s1;
    s1.roll = 5484;
    strcpy(s1.name, "foram");
    s1.cgpa =  9.2;
    printf("Name of student = %s\n", s1.name);
    return 0;


}
