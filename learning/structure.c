#include<stdio.h>
#include<string.h>

//user defined structure
    struct student {
        int roll;
        float cgpa;
        char name[100];
    };

int main() {
    struct student s1 = {19748, 9.2, "Foram"};

    printf("name: %s\n", s1.name);
    printf("roll: %d\n", s1.roll);
    printf("cgpa: %f\n", s1.cgpa);
    
    return 0;   
}