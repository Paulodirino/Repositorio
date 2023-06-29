#include<stdio.h>

int a,i;
int total;

void funcao11(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d\n", i);
        }
    }
}

int main() {

    funcao11(66);

return 0;
}

