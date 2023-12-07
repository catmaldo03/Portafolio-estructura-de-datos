#include<stdio.h>
void equals(int Ai[]);
int main(){
    int Ai[10] ={1,2,4,5,6,7,8,9,10,20};
    equals(Ai);
    return 0;
}
void equals(int Ai[]){
    int i,j, flag=0;
    for(i=1, j=0;j<10;j++,i*=2){
        if(Ai[j]==i){
            printf("A_i= %d e i=%d\n", Ai[j], i);
            flag=1;
        }
    }
    if(flag==0)
    printf("No hay elementos iguales entre Ai e i");
}