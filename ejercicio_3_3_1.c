#include<stdio.h>
void burbuja(int arreglo_A[],int count);
void seleccion(int arreglo_A[],int count);
void insercion(int arreglo_A[],int count);
void swap(int *a,int *b);
int main()
{
    //SOLUCIONAR EL QUE SE ENVIE EL MISMO ARREGLO
    int arreglo_A[]={-2,8,12,34,2,67,8,5,-78,99,-34,78};
    int arreglo_B[]={-2,8,12,34,2,67,8,5,-78,99,-34,78};
    int arreglo_C[]={-2,8,12,34,2,67,8,5,-78,99,-34,78};
    int count;
    count=sizeof(arreglo_A)/sizeof(arreglo_A[0]);
    burbuja(arreglo_A,count);
    seleccion(arreglo_B,count);
    insercion(arreglo_C,count);
    return 0;
}
void burbuja(int arreglo_A[],int count)
{
    int i,j;
    printf("Arreglo original: \n");
    for(i=0;i<count;i++)
      printf("%d ",arreglo_A[i]);
    for(i=0;i<count;i++)
    {
        for(j=0;j<count-i-1;j++)
        {
            if(arreglo_A[j]>arreglo_A[j+1])
              swap(&arreglo_A[j],&arreglo_A[j+1]);
        }
    }
    printf("\narreglo ordenado: \n");
    for(i=0;i<count;i++)
      printf("%d ",arreglo_A[i]);
}
void seleccion(int arreglo_A[],int count)
{
    int i,j,min_idx;
    printf("\nArreglo original: \n");
    for(i=0;i<count;i++)
      printf("%d ",arreglo_A[i]);
    for(i=0;i<count-1;i++)
    {
        min_idx=i;
        for(j=i+1;j<count;j++){
          if(arreglo_A[j]<arreglo_A[min_idx]){
            min_idx=j;
        }
        }
        swap(&arreglo_A[min_idx],&arreglo_A[i]);
    }
    printf("\narreglo ordenado: \n");
    for(i=0;i<count;i++)
      printf("%d ",arreglo_A[i]);
}
void swap(int *a,int *b)
{
   int aux;
   aux=*a;
   *a=*b;
   *b=aux;
}
void insercion(int arreglo_A[],int count)
{
    int i, key, j;
    printf("\nArreglo original: \n");
    for(i=0;i<count;i++)
      printf("%d ",arreglo_A[i]);
    for(i=1;i<count;i++){
        key=arreglo_A[i];
        j=i-1;
        while(j>=0&&arreglo_A[j]>key)
        {
            arreglo_A[j+1]=arreglo_A[j];
            j=j-1;
        }
        arreglo_A[j+1]=key;
    }
    printf("\narreglo ordenado: \n");
    for(i=0;i<count;i++)
      printf("%d ",arreglo_A[i]);
}
