#include<stdio.h>

int a,i;
int total;

int funcao07(int a, int b, int c) {
    int maior = a;
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }
    int menor = a;
    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }
    return maior + menor;
}

int main() {

    funcao07(66);

return 0;
}
