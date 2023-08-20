#include<stdio.h>
void ordenar(int a[],int count);
int main()
{
    int a[]={2,7,8,4,3,5,1,15,12};
    int count;
    count=sizeof(a)/sizeof(a[0]);
    ordenar(a,count);
    return 0;
}
void ordenar(int a[],int count)
{
  int i,j,aux;
  for(i=0;i<count-1;i++)
  {
    for(j=0;j<count-i;j++)
    {
        if(a[j]>a[j+1])
        {
            aux=a[j];
            a[j]=a[j+1];
            a[j+1]=aux;
        }
    }
  }
  printf("%d",a[1]);
}