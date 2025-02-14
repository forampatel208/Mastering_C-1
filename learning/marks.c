#include<stdio.h>

float calcuPer(int sci, int math, int sanskruth);

int main() {
    int sci = 98;
    int math = 94;
    int sanskruth = 99;

    printf("percentage is: %f", calcuPer(sci, math, sanskruth));
}

float calcuPer(int sci, int math, int sanskruth) {
    return((sci + math + sanskruth) / 3);
}