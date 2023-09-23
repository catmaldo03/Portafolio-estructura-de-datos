#include <stdio.h>
void insercion_binaria(int array[], int count);
int busqueda_binaria(int array[], int key, int low, int high);
int main(){
    int array[]={2,5,13,7,4,6,18,1};
    int count;
    count= sizeof(array)/sizeof(array[0]);
    insercion_binaria(array, count);
    for (int i = 0; i < count; i++)
        printf("%d ", array[i]);
    
}
void insercion_binaria(int array[], int count){
    int i,j,key,posicion;
    for (i=1;i<count;i++) {
        j =i-1;
        key=array[i];
        posicion= busqueda_binaria(array, key, 0, j);
        while (j>=posicion) {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=key;
    }
}
int busqueda_binaria(int array[], int key, int low, int high) {
    int mid;
    if (high<=low){
        if (key > array[low]) {
            return low+1;
        } 
        else {
            return low;
        }
    }
    mid=(low+high)/2;
    if (key==array[mid])
        return mid+1;
    if (key>array[mid])
        return busqueda_binaria(array, key, mid + 1, high);
    return busqueda_binaria(array, key, low, mid - 1);
}