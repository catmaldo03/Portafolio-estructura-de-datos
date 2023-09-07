#include<stdio.h>
int suma(int*var_1, int* var_2);
int main(){
    int num_1, num_2;
    num_1=10;
    num_2= 27;
    printf("%d\n",suma(&num_1,&num_2));
    return 0;
}
int suma(int*var_1, int* var_2){
    int resultado;
    resultado= *var_1+*var_2;
    return resultado;
}