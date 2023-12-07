#include<stdio.h>
int main(){
    int a=4,b=5;
    a = a+b; // a es igual a 9
    b = a-b;// b se hace igual a 4
    a= a-b; //a vale lo mismo que valia b originalmente, 9 -4 =5
    printf("%d    %d\n", a, b);
    return 0;
}