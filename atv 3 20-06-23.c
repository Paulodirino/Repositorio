#include<stdio.h>
int a,i,resposta;   // cria as variaveis

void conta(int a){   // começa função

    for(i=1; i<=a; i++){
        printf("%d\n",i);
    }
}   // fim da função

int main (){        // começa codigo
scanf("%d",&a);

conta(a); //chama a função la de cima

return 0;
}
