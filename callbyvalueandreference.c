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
/**
F* get_freshers(F f)
{
    f.batch=2022;
    strcpy(f.school,"cse");
    f.d.dd=11;
    f.d.mm=9;
    f.d.yy=2018;
}
this function wont make any difference bcz its local to the function
**/
/**
F* get_freshers(F f)
{
    f.batch=2022;
    strcpy(f.school,"cse");
    f.d.dd=11;
    f.d.mm=9;
    f.d.yy=2018;
    return f
}
this function will return the f but there will be a new copy of it prepared in the memory
**/
void get_freshers(F *f)
{
    f->batch=2022;
    strcpy(f.school,"cse");
    f->d.dd=11;
    f->d.mm=9;
    f->d.yy=2018;
}
int main()
{
    F f1;
    /**get_freshers(f1);
printf("%d %s %d %d %d\n",f1.batch,f1.school,f1.d.dd,f1.d.mm,f1.d.yy);
call by value**/
   get_freshers(&f1);
   printf("%d %s %d %d %d\n",newf->batch,newf->school,newf->d.dd,newf->d.mm,newf->d.yy);
    return 0;
}
