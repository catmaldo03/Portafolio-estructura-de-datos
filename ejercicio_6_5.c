#include <stdio.h>
void repeticiones(int A[], int n);
int main(){
    int A[]={1,1,5,6,2,3,9,4,5,5,1,2,9,0,2,2,1,3,4,5,6,7,3,0,5,7,9,2,3,4,1,0};
    int n;
    n=sizeof(A)/sizeof(A[0]);
    repeticiones(A,n);
    return 0;
}
void repeticiones(int A[], int n){
    int i;
    int repeticion[10]={0};

    for(i=0;i<n;i++){
        if (A[i]==0)
            repeticion[0]++;
        else if (A[i]==1)
            repeticion[1]++;
        else if (A[i]==2)
            repeticion[2]++;
        else if (A[i]==3)
            repeticion[3]++;
        else if (A[i]==4)
            repeticion[4]++;
        else if (A[i]==5)
            repeticion[5]++;
        else if (A[i]==6)
            repeticion[6]++;
        else if (A[i]==7)
            repeticion[7]++;
        else if (A[i]==8)
            repeticion[8]++;
        else if (A[i]==9)
            repeticion[9]++;
    }
    for (int i = 0; i < 10; i++) {
        if (repeticion[i]!=0)
            printf("El elemento %d se repite %d veces\n", i, repeticion[i]);
        else
            printf("El elemento %d no se repite\n", i);
    }
}