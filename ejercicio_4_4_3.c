#include<stdio.h>
#include<stdlib.h>//se sobreescribe el primer elemento del arreglo
void write(int array[],int tam);
void search(int array[],int tam,int elemento);
int main(){
    int tam=10, elemento;
    int *array;
    array=(int *)malloc(tam*sizeof(int));
    if(array==NULL){
        printf("No hay memoria\n");
        return 1;
    }
    elemento=5;
    write(array,tam);
    search(array,tam,elemento);
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
void search(int array[],int tam,int elemento){
    int i,flag=0,pos;
    for(i=0;i<tam;i++){
        if(*(array+i)==elemento){
            flag=1;
            pos=i;
        }
    }
    if(flag==1)
        printf("El elemento fue encontrado en el puesto %d\n", pos);
    else
        printf("El elemento no fue encontrado\n");
}