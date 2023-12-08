#include<stdio.h>
#include<stdbool.h>
bool sum_exist(int A[],int k);
int main(){
    int A[10]={1,5,6,2,4,13,8,9,7,2};
    int k= 100;
    if(sum_exist(A,k))
        printf("Existe k en en arreglo A\n");
    else
        printf("No esta k en el arreglo A\n");
    return 0;
}
bool sum_exist(int A[], int k){
    for(int i =0; i<10;i++)
    {
        if((A[i] +A[i+1])==k)
            return true;
    }
    return false;
}