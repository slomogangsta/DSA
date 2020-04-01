#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define size 100000
#define its 10000000

void search(int a[],int key)
{
 int i=0;
 for(i=0;i<size;i++)
 {
     if(a[i]==key)
     {
         break;
     }
 }
}
int main()
{
   int a[size];
    int i,j;
    clock_t start,end;
    for(i=0;i<size;i++)
    {
        a[i]=rand()%1000;
    }
    start=clock();
    for(j=0;j<its;j++)
    {
      search(a,a[size-1]);
    }

    end=clock();
    double t;
    t=(end-start)/CLOCKS_PER_SEC;
    printf("%g",t/its);
    return 0;


}
