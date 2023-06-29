#include<stdio.h>

int a,i;
int total;

int par (int a){
for (i=0;i<3;i++){
     scanf("%d",&a);
     a = a % 2;
     if (a != 1){
        total = total+1;
     }
}

}

int main() {

total = par(a);

printf("%d ",total);

return 0;
}
