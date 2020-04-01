#include<stdio.h>
#include<stdlib.h>
#define size 1000
#define its 1000
#include<math.h>
#include<time.h>
void add(int a[])
{
    int i,result=0;
    for (i=0;i<size;i++)
    {
        result=result+a[i];
    }
}
int main()
{    int a[size];
    int i,j;
    clock_t start,end;
    for(i=0;i<size;i++)
    {
        a[i]=rand()%1000;
    }
    start=clock();
    for(j=0;j<its;j++)
    {
      add(a);
    }

    end=clock();
    double t;
    t=(end-start)/CLOCKS_PER_SEC;
    printf("%g",t/its);
    return 0;

}
