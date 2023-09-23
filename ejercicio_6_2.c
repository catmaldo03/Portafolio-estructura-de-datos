#include<stdio.h>
int ack(int m,int n, int recorrido);
void swap(int *a,int *b);
int main(){
    int m,n,resultado;
    m=4;
    n=3;
    resultado=ack(m,n,0);
    printf("%d",resultado);
    return 0;
}
int ack(int m,int n,int recorrido){
    if(recorrido>128){// recorre la funcion hasta un limite
        return 0;
    }
    if(m==0){
        return n+1;
    }
    else if(m>0&&n==0)
    {
        return ack(m-1,1,recorrido+1);
    }
    else if(m>0&&n>0)
    {
        return ack(m-1,ack(m,n-1,recorrido+1),recorrido+1);
    }
}
