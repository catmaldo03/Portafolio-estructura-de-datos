#include<stdio.h>
void insercion(int S[]);
void mostrar_arreglo(int S[]);
void seleccion(int S[]);
void swap(int *a,int *b);
int main(){
    int  S_1[6] = {8, 4, 9, 13, 5, 2};
    int  S_2[6] = {8, 4, 9, 13, 5, 2};
    printf("Insercion\n");
    insercion(S_1);
    printf("Seleccion\n");
    seleccion(S_2);
}

void insercion(int S[])
{
  int i,key,j;
  for(i=1;i<6;i++)
  {
    key=S[i];
    j=i-1;
    while (j>=0 && S[j]>key){
      S[j+1]=S[j];
      j=j-1;
      
    }
    S[j+1]=key;
    mostrar_arreglo(S);
  }

}

void seleccion(int S[]){
  int i,j,min_idx;
  for(i=0;i<6;i++)
  {
    min_idx=i;
    for(j=i+1;j<6;j++){
      if(S[j]<S[min_idx])
         min_idx=j;
    }
    swap(&S[min_idx],&S[i]);
    mostrar_arreglo(S);
  }
}
void mostrar_arreglo(int S[]){
    for(int i=0;i<6;i++){
        printf(" %d ",S[i]);
    }
    printf("\n");
}
void swap(int *a,int *b)
{
   int aux;
   aux=*a;
   *a=*b;
   *b=aux;
}