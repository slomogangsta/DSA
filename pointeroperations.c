#include<stdio.h>
#include<stdlib.h>
void add(int *a,int n)
{
    int r=0;
    r=(*(a))+(*(a+1))+(*(a+2));
    printf("%d\n",r);
}
int main()
{

    int a=10;
    int *b;
    b=&a;
     printf("%d\n",*b);
     printf("%d\n",a);
     printf("%d\n",*&a);
     printf("%d\n",**&b);
     printf("%d\n",*b);
     int n[10] = {1,2,3};
     printf("%d\n",*n);
     printf("%d\n",*(n+1));
     printf("enter the value of the array");
     scanf("%d",n+4);
     printf("%d\n",*(n+4));
       printf("enter the value of the array");
     scanf("%d",&4[n]);
     printf("%d\n",4[n]);
     add(n,3);
     int *pa;
     int s;
     int i=0;
     printf("enter the size\n");
     scanf("%d",&s);
     pa=(int*)malloc(sizeof(int)*s);
     printf("enter %d values",s);
     for(i=0;i<s;i++)
     {
          scanf("%d",pa+i);
     }
     printf("entered %d values are\n",s);
     int*q=pa;
      for(i=0;i<s;i++)
     {
         printf("%d",*(q+i));
     }
return 0;

}
