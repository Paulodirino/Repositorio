#include<stdio.h>

int a,i;
int total;

int funcao10(int a, int b) {
    int soma = 0, i;
    for (i = a; i <= b; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }
    return soma;
}

int main() {

    funcao10(66);

return 0;
}

