#include<stdio.h>
void print_array(int a[], int count);
int main()
{
    int a[] = {1,3,4,5,7,8,9};
    int count;
    count=sizeof (a)/sizeof(a[0]);
    print_array(a,count);
    return 0;
}
void print_array(int a[], int count)
{
  int i;
  for(i=0;i<count;i++)
  {
    printf("%d\n", a[i]);
  }
}