#include<stdio.h>

int a,i;
int total;

double funcao08(double c, int m, double t) {
    double j = c * m * (t / 100); // t = 1%
    // double j = c * m * t; t = 0.01
    return j;
}

int main() {


    funcao08(66);

return 0;
}

