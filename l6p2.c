#include<stdio.h>
#include<stdlib.h>
#define MAXQUEUE 100
#define TRUE 1
#define FALSE 0
struct dqueue
{
    int items[MAXQUEUE];
    int front1,front2,rear1,rear2 ;
};
typedef struct dqueue DQUEUE;

int emptyp(DEQUEUE *p)
{
    if(p->front1>p->rear1)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int full(DEQUEUE *p,DEQUEUE *c)
{
    if((front1+1)==front2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
  DQUEUE producer;
  DQUEUE concumer;
  p.rear1=-1;
  p.front1=0;
  c.front2=MAXQUEUE-1;
  c.rear2=MAXQUEUE;
  int choice=0;
     while(1)
    {
        printf("**menu**\n");
        printf("1-insert at the start\n2-insert at the end \n3-delete from the start\n4-delete from the end\n5-display list\n6-exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : start=is(start);
            break;
             case 2 : start=ie(start);
            break;
             case 3 : start=ds(start);
            break;
             case 4 : start=de(start);
            break;
             case 5 : start=dis(start);
            break;
             case 6 : exit(0);
           }
}

}
