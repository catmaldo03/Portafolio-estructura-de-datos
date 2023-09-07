#include<stdio.h>
int potencia(int x, int n);
int main(){
    int x, n, resultado;
    x=2;
    n=10;
    resultado=potencia(x,n);
    printf("%d", resultado);
    return 0;
}
int potencia(int x, int n)
{
    if(n>1)
    return x*potencia(x,n-1);
    else
       return x;
}