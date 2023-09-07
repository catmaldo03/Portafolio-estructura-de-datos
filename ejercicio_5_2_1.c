//fibonacci
#include<stdio.h>
#include<stdlib.h>
int fibonacci(int num);
int main(){
    int num=3, resultado;
    resultado=fibonacci(num);
    printf("el resultado es :%d",resultado);
    return 0;
}
int fibonacci(int num){
    if(num>2)
        return fibonacci(num-1)+fibonacci(num-2);
    else if(num==2)
        return 1;
    else if(num==1)
        return 1;
    else
        return 0;
}