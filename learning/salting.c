#include<stdio.h>
#include<string.h>

void salting(char password[]);

int main() {
    char password[100];
    scanf("%s", password);

    salting(password);
}

void salting(char password[]) {
    char salt[] = "123";
    char newPassword[200];

    strcpy(newPassword, password); //newPass = password
    strcat(newPassword, salt); //newPass = password + salt
    puts(newPassword);
}