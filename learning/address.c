#include<Stdio.h>
#include<string.h>

typedef struct address {
    int houseNo;
    int block;
    char city[100];
    char state[50];
} add;

int main () {
    add p1;
    p1.houseNo = 589485;
    p1.block = 2;
    strcpy(p1.city, "Hyd");
    strcpy(p1.state, "Telangana");

    add p2;
    p2.houseNo = 8708;
    p2.block = 1;
    strcpy(p2.city, "Gandhinagar");
    strcpy(p2.state, "Gujarat");

    add p3 = {556453565, 3, "jlnnblk", "bgdb"};

    printf("Address of p2 is %d, %d, %s, %s", p2.block, p2.houseNo, p2.city, p2.state);
}