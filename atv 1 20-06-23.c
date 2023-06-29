#include<stdio.h>
// 2 5 3
 double A,B,C;
 double deltaa;

double delta(double A,double B,double C){

double resultado;
 scanf("%lf %lf %lf",&A,&B,&C);
 resultado = (B * B) - (4 * A * C);
 printf("%lf\n", resultado);

}

int main(){

    deltaa = delta(A,B,C);

 return 0;
}
