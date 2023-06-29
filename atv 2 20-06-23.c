#include<stdio.h>
// 2 5 3
 double A,B;
 double maior;

double maiorr(double A,double B){

double maior;
 scanf("%lf %lf",&A,&B);
if (A>B){
    printf("%lf\n", A);
}else{
    printf("%lf\n", B);
}
}

int main(){
    maior = maiorr(A,B);
 return 0;
}
