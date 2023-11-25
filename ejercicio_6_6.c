#include<stdio.h>
int printDig(int num);
int main(){
    printf("%d\n", printDig(147734));
    return 0;
}
int printDig(int num){
    if (num<10&&num>-10)
        return 1;
    else
        return 1+printDig(num/10);
}