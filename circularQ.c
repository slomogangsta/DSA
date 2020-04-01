#define SIZE 100
#define TRUE 1
#define FALSE 0
#include<stdio.h>
#include<stdlib.h>

struct cq
{
    int front;
    int rear;
    int items[SIZE];
};
typedef struct cq CQ;

int empty(CQ *q)
{
    if(q->front==q->rear)
    {
    return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int full(CQ *q)
{
    if(q->front==(q->rear+1)%SIZE)
       {
           return TRUE;
       }
       else{
        return FALSE;
       }
}

void enqueue(CQ *q)
{
    if(full(q))
    {
        printf("the queue is full\n");
        return ;
    }
    int x;
    printf("enter the element to be inserted \n");
    scanf("%d",&x);
    q->rear=(q->rear+1)%SIZE;
    q->items[q->rear]=x;
    printf("%d is inserted successfully\n",x);
    return;
}

void dequeue(CQ *q)
{
    if(empty(q))
    {
        printf("the queue is empty \n");
        return;
    }
    int x;
    q->front=(q->front+1)%SIZE;
    x=q->items[q->front];
    printf("%d is dequeued\n",x);
    return;
}

void display(CQ *q)
{

    if(empty(q))
    {
        printf("the queue is empty\n");
        return;
    }
    int i;

    if(q->front>q->rear)
    {

        for(i=q->front+1;i<=SIZE-1;i++)
        {
            printf("%d\t",q->items[i]);
        }
        for(i=0;i<=q->rear;i++)
        {
            printf("%d\t",q->items[i]);
        }
        printf("\n");
        return;
    }
    if(q->rear>q->front)
    {

      for(i=q->front+1;i<=q->rear;i++)
    {
        printf("%d\t",q->items[i]);
    }
    printf("\n");
    return;
    }


}

int main()
{
    CQ q;
    q.front=SIZE-1;
    q.rear=SIZE-1;
    int choice;
    while(1)
    {
     printf("1-Enqueue\n2-Dequeue\n3-Display\n4-Exit\nEnter your choice\n");
    scanf("%d",&choice);
    switch(choice)
        {
            case 1: enqueue(&q);
                    break;

            case 2:
                    dequeue(&q);
                    break;

            case 3: display(&q);
                    break;

            case 4: exit(0);
                    break;

            default : printf("Enter valid data \n");
                        break;
        }

    }
return 0;
}
