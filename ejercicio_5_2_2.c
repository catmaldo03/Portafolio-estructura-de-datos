#include<stdio.h>
#include<stdlib.h>
int gcd(int n,int m);
int main(){
    int n, m, resultado;
    n=10;
    m=7;
    resultado = gcd(n,m);
    printf("%d",resultado);
    return 0;
}
int gcd(int n, int m)
{
    if(n>=m &&m>0)
        return gcd(m,(n%m));
    else if(m==0)
        return 0;
    return 0;
}