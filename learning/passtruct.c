#include<stdio.h>

struct student {
    int roll;
    char name[500];
    float cgpa;
};

void printInfo(struct student s1);

int main() {

    struct student s1 = { 5484, "foram", 9.2};
    printInfo(s1);
    return 0;
}

void printInfo(struct student s1) {
    printf("name: %s\n", s1.name);
    printf("roll: %d\n", s1.roll);
    printf("cgpa: %f\n", s1.cgpa);
}