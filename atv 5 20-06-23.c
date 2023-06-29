#include<stdio.h>

int b,h;
int res;

int fun (int b,int h){
    scanf("%d %d",&b, &h);

if(b == h){
    res = 1;
}else{
    res = 0;
}

return res;
}

int main() {

res = fun(b,h);

printf("%d ",res);

return 0;
}
