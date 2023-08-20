#include<stdio.h>
void binario(int numero);
int main()
{
    int numero;
    numero=20;
    binario(numero);
    return 0;
}
void binario(int numero)
{
    int binnum[8];
    int i,j;
    if(numero==0)
      printf("0");
    for(i=0;numero>0;i++)
    {
      binnum[i]=numero%2;
      numero= numero/2;
    }
    for(j=i-1;j>=0;j--)
    {
      printf(" %d ",binnum[j]);
    }
}