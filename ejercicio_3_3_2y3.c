#include<stdio.h>
void swap(int *a,int *b);
void bubblesort(int conjunto_B[],int marca_b,int marca_a);
void insercion(int conjuto_B[], int marca_b, int marca_a);
void seleccion(int conjunto_B[], int marca_b,int marca_a);
int busqueda_bin(int conjunto_B[],int first_index,int last_index,int elemento);
int main()
{
    int conjunto_B[]={8,4,2,7,9,12,-45,3,-46,5,34,23,10,0,33,-10,-8,6};
    int count,i,resultado;
    count=sizeof(conjunto_B)/sizeof(conjunto_B[0]);
    printf("\nArreglo original: \n");
    for(i=0;i<count;i++)
      printf("%d ",conjunto_B[i]);
    bubblesort(conjunto_B,0,7);
    insercion(conjunto_B,8,13);
    seleccion(conjunto_B,14,count-1);
    printf("\narreglo ordenado: \n");
    for(i=0;i<count;i++){
      printf("%d ",conjunto_B[i]);
      if(i==7)
       printf("\n");
      if(i==13)
      printf("\n");
    }
    resultado=busqueda_bin(conjunto_B,0,count-1,67);
    if(resultado!=-1)
       printf("El elemento 67 se encuentra en el indice %d\n",resultado);
    else
       printf("\nEl elemento 67 no se encuentra en el arreglo\n");
    return 0;
}
void swap(int *a,int *b)
{
   int aux;
   aux=*a;
   *a=*b;
   *b=aux;
}
void bubblesort(int conjunto_B[],int marca_b,int marca_a){
  int i,j;
  for(i=marca_b;i<marca_a;i++)
  {
    for(j=marca_b;j<marca_a-i;j++)
    {
      if(conjunto_B[j]>conjunto_B[j+1])
        swap(&conjunto_B[j],&conjunto_B[j+1]);
    }
  }
}
void insercion(int conjuto_B[], int marca_b, int marca_a)
{
  int i,key,j;
  for(i=marca_b+1;i<=marca_a;i++)
  {
    key=conjuto_B[i];
    j=i-1;
    while (j>=marca_b && conjuto_B[j]>key){
      conjuto_B[j+1]=conjuto_B[j];
      j=j-1;
    }
    conjuto_B[j+1]=key;
  }

}
void seleccion(int conjunto_B[], int marca_b,int marca_a){
  int i,j,min_idx;
  for(i=marca_b;i<marca_a;i++)
  {
    min_idx=i;
    for(j=i+1;j<marca_a;j++){
      if(conjunto_B[j]<conjunto_B[min_idx])
         min_idx=j;
    }
    swap(&conjunto_B[min_idx],&conjunto_B[i]);
  }
}
int busqueda_bin(int conjunto_B[],int first_index,int last_index,int elemento){
  int middle;
  while(first_index<=last_index)
  {
    middle=first_index+(last_index-first_index)/2;
    if(conjunto_B[middle]==elemento)
      return middle;
    if(conjunto_B[middle]<elemento)
    {
      first_index=middle+1;
    }
    else
      last_index=middle-1;
  }
  return -1;
}