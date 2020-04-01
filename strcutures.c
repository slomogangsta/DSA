#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct freshers
{
    int batch;
    char school[5];
    int dd;
    int mm;
    int yy;
}F;
/**
typedef struct
{
    int batch;
    char school[5];
    int dd;
    int mm;
    int yy;
}F;
//this is no name structure
typedef struct
{
    int batch;
    char school[5];
    int dd;
    int mm;
    int yy;
}F={2021,"cse",11,9,2018};
//static initializing
typedef struct
{
    int batch;
    char school[5];
    int dd;
    int mm;
    int yy;
}F={0,"\0",11,9};
//when i dont want a few fields to be initialized
**/
F f[3]={{2022,"cse",11,9,2019}};//array holding 3 copied of data type freshers where each copy holds all the internal values of the data structure
int main()
{
    F f1;
    f1.batch=2021;
    strcpy(f1.school,"ece");
    f1.dd=5;
    f1.mm=9;
    f1.yy=2018;
     f[1].batch=2021;
    strcpy(f[1].school,"ece");
    f[1].dd=5;
    f[1].mm=9;
    f[1].yy=2018;
    F f2;
    printf("enter the batch , branch and date\n");
    scanf("%d %s %d %d %d",&f2.batch,f2.school,&f2.dd,&f2.mm,&f2.yy);
    printf("%d %s %d %d %d\n",f2.batch,f2.school,f2.dd,f2.mm,f2.yy);
    int i;
    for(i=0;i<3;i++)
    {
        printf("%d %s %d %d %d\n",f[i].batch,f[i].school,f[i].dd,f[i].mm,f[i].yy);
    }
    return 0;
}
/**#include<stdio.h>
#include<stdlib.h>
typedef struct date
{
int dd;
int mm;
int yy;
}d;
typedef struct freshers
{
    int batch;
    char school[5];
    d date;
}F;
F f[3]={{2022,"cse",{11,9,2019}}};//array holding 3 copied of data type freshers where each copy holds all the internal values of the data structure
int main()
{
    F f1;
    f1.batch=2021;
    strcpy(f1.school,"ece");
    f1.date.dd=5;
    f1.date.mm=9;
    f1.date.yy=2018;
     f[1].batch=2021;
    strcpy(f[1].school,"ece");
    f[1].date.dd=5;
    f[1].date.mm=9;
    f[1].date.yy=2018;
    F f2;
    printf("enter the batch , branch and date\n");
    scanf("%d %s %d %d %d",&f2.batch,f2.school,&f2.date.dd,&f2.date.mm,&f2.date.yy);
    printf("%d %s %d %d %d\n",f2.batch,f2.school,f2.date.dd,f2.date.mm,f2.date.yy);
    int i;
    for(i=0;i<3;i++)
    {
        printf("%d %s %d %d %d\n",f[i].batch,f[i].school,f[i].date.dd,f[i].date.mm,f[i].date.yy);
    }
    return 0;
}
**/
