#include<stdio.h>
#include<stdlib.h>//se sobreescribe el primer elemento del arreglo
void write(int array[],int tam);
void read(int array[],int tam);
int main(){
    int tam=10;
    int *array;
    array=(int *)malloc(tam*sizeof(int));
    if(array==NULL){
        printf("No hay memoria\n");
        return 1;
    }
    write(array,tam);
    read(array,tam);
    free(array);
    return 0;
}
void write(int array[],int tam){
    int i;
    for(i=0;i<tam;i++){
        printf("Ingrese el espacio %d: ",i);
        scanf("%d", array+i);
    }
}
void read(int array[],int tam){
    int i;
    for(i=0;i<tam;i++)
        printf("%d\n",*(array+i));
}