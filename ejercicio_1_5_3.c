#include<stdio.h>
void mostrar(int a[], int count);
int main()
{
    int a[]={2,7,8,4,3,5};
    int count;
    count=sizeof(a)/sizeof(a[0]);
    mostrar(a,count);
    return 0;
}
void mostrar(int a[], int count)
{
    int i;
    printf("Los numeros impares del arreglo son: \n");
    for(i=0;i<count;i++)
    {
        if(a[i]%2==1)
         printf("%d\n", a[i]);
    }
}