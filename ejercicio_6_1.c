#include<stdio.h>
#include<string.h>
int palindroma(char* palabra, int inicio, int fin);
int main(){
    char palabra[]={"la ruta natural"};
    int largo,resultado;
    largo = strlen(palabra);
    resultado = palindroma(palabra, 0, largo - 1);
    if (resultado==1) {
        printf("La palabra es palindroma\n");
    } 
    else {
        printf("La palabra es no es palindroma\n");
    }

    return 0;
}
int palindroma(char* palabra, int inicio, int fin) {
    while (palabra[inicio] == ' ') {
        inicio++;
    }
    while (palabra[fin] == ' ') {
        fin--;
    }
    if (inicio >= fin) {
        return 1;
    }
    if (palabra[inicio] != palabra[fin]) {
        return 0;
    }
    return palindroma(palabra, inicio + 1, fin - 1);
}
