#include<stdio.h>
int a,i,resposta;   // cria as variaveis

void conta(int a){   // come�a fun��o

    for(i=1; i<=a; i++){
        printf("%d\n",i);
    }
}   // fim da fun��o

int main (){        // come�a codigo
scanf("%d",&a);

conta(a); //chama a fun��o la de cima

return 0;
}
