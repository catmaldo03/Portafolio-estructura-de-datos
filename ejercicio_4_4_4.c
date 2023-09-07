#include<stdio.h>
#include<stdlib.h>
void valores(int* puntero_1,int* puntero_2, int* puntero_3);
int main(){
    int* p1;
    int* p2;
    int* p3;
    p1= malloc(sizeof(int));
    p2= malloc(sizeof(int));
    p3= malloc(sizeof(int));
    valores(p1,p2,p3);
    printf("Los valores de los punteros son: %d, %d, %d\n",*p1,*p2,*p3);
    free(p1);
    free(p2);
    free(p3);
    return 0;
}
void valores(int* puntero_1,int* puntero_2, int* puntero_3){
    *puntero_1=20;
    *puntero_2=100;
    *puntero_3=-50;
}