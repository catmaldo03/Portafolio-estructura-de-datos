#include<stdio.h>
void eliminar(int a[], int count, int posicion);
int main()
{
    int a[]={2,7,8,4,3,5};
    int count, posicion;
    count=sizeof(a)/sizeof(a[0]);
    posicion=2;
    eliminar(a,count, posicion);
    return 0;
}
void eliminar(int a[], int count, int posicion)
{
    int i;
    printf("Este es el arreglo original\n");
    for(i=0;i<count;i++)
      printf(" %d ",a[i]);
    printf("\n");
    printf("Se elminara la %d posicion",posicion);
    for(i=0;i<count;i++)
    {
        if(posicion==i)
         a[i]=0;
    }
    printf("\nAreglo nuevo: \n");
     for(i=0;i<count;i++)
      printf(" %d ",a[i]);
    printf("\n");
}