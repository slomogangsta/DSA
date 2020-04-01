#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct date
{
int dd;
int mm;
int yy;
}D;
typedef struct freshers
{
    int batch;
    char school[5];
D d;
}F;
int main()
{
   F *newf;
   newf=(F*)malloc(sizeof(F));
   newf->batch=2023;
   strcpy(newf->school,"cse");
   newf->d.dd=11;
   newf->d.mm=03;
   newf->d.yy=2020;
   printf("%d %s %d %d %d\n",newf->batch,newf->school,newf->d.dd,newf->d.mm,newf->d.yy);
    return 0;
}
