#include<stdio.h>
#include<stdlib.h>
#define size 10000
#define its 1000
#include<math.h>
#include<time.h>

void bblsrt(int a[])
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
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
      bblsrt(a);
    }

    end=clock();
    double t;
    t=(end-start)/CLOCKS_PER_SEC;
    printf("%g",t/its);
    return 0;


}

