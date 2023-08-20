#include<stdio.h>
void duplicados(int a[], int count);
int main()
{
    int a[]={2,2,6,6,7,8};
    int count;
    count= sizeof(a)/sizeof(a[0]);
    duplicados(a,count);
    return 0;
}
void duplicados(int a[], int count)
{
  int i,duplicados;
  duplicados=0;
  for(i=0;i<count;i++)
  {
    if(a[i]==a[i+1])
      duplicados++;
  }
  printf("hay: %d numeros duplicados", duplicados);
}