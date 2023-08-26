#include<stdio.h>
void merge(int count,int count_b,int tamano,int a[],int b[],int aux[]);
int main()
{
    int a[] = {1,3,4,7,9,11};
    int b[] = {2,5,6,8,10};
    int count,count_b,i,tamano;
    
    count=sizeof (a)/sizeof(a[0]);
    count_b=sizeof (b)/sizeof(b[0]);
    tamano=count+count_b;
    int aux[tamano];
    merge(count, count_b,tamano,a,b,aux);
    for(i=0;i<tamano;i++)
  {
    printf("%d ", aux[i]);
  }
    return 0;
}
void merge(int count,int count_b,int tamano,int a[],int b[],int aux[])
{
  int x=0;
  int y=0;
  int i=0;
    while (i<tamano)
    {  
      if((x<count)&&(y<count_b)){
        if(a[x]< b[y])
        {
            aux[i]=a[x];
            x+=1;
        }
        else if(a[x] > b[y])
        {
            aux[i]=b[y];
            y+=1;
        }
        else if(a[x] > b[y])
        {
            aux[i]=b[y];
            y+=1;
        }
        else if(a[x]==b[y])
        {
          aux[i]=a[x];
          i+=1;
          aux[i]=b[y];
          y+=1;
          x+=1;
        }
      }
    else if(x>=count&&(y<count_b))
    {
      aux[i]=b[y];
      y++;
    }
      
    else if(y>=count_b&&(x<count))
    {
       aux[i]=a[x];
       x++;
    }
    i++;      
    }
}