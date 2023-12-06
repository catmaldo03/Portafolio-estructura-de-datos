#include<stdio.h>
int invert_Number(int number);
int main(){
    int number = 1234;
    int new_number = invert_Number(number);
    printf("  \n%d  ", new_number);
    return 0;
}
int invert_Number(int number) {
    int new_number = 0;
    while (number != 0) {
       new_number = new_number * 10 + number % 10;
       number /= 10;
    }
    return new_number;
}