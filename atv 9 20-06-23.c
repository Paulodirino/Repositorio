#include<stdio.h>

int a,i;
int total;

void funcao09(double a, double b, double c) {
    double delta = funcao01(a, b, c);
    if (delta < 0) {
        printf("Nao existe raizes\n");
    } else if (a == 0) {
        double x = (-c) / b;
        printf("x = %.1lf\n", x);
    } else if (delta == 0) {
        double x = (-b) / (2 * a);
        printf("x = %.1lf\n", x);
    } else {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("x1 = %.1lf x2 = %.1lf\n", x1, x2);
    }
}

int main() {

    funcao09(66);

return 0;
}

