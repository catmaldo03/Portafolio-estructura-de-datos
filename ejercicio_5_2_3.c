#include<stdio.h>
int factorial(int n);
int main(){
    int n,resultado;
    n=10;
    resultado=factorial(n);
    printf("%d",resultado);
    return 0;
}
int factorial(int n)
{
    if(n>1)
        return n*factorial(n-1);
    else
        return 1;
}