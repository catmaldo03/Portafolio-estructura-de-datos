#include <stdio.h>
int main(void){
int a,b,c,*p1,*p2;
p1 = &a; //El puntero p1 apunta -> a
*p1 = 1;// El contenido del puntero p1,osea la variable a, vale 1 
p2 = &b;// El puntero p2 apunta -> b
b = 2;// b toma el valor de 2
p1 = p2;// El puntero p1 ahora apunta hacia donde apuntaba p2, osea p1 ahora apunta a p2
*p1 = 0;//El contenido de p1, osea b ahora es igual a 0;
p2 = &c;//El puntero p2 apunta a la variable C
*p2 = 3;// El contenido de lo que apunta p2, osea a la variable C, es igual a 3
printf("%d %d %d\n",a,b,c); // Se deberia imprimir que a = 1, b = 0 y c = 3
return 0;
}
