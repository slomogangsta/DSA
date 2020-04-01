#include <stdio.h>
#include<stdlib.h>
#define MAXQUEUE 5
#define TRUE 1
#define FALSE 0
struct queue{
    int front;
    int rear;
    int items[MAXQUEUE];
};
typedef struct queue QUEUE;
int empty(QUEUE *q)
{
    if(q->front>q->rear)
    {
        return TRUE;
    }
    else{
        return FALSE;
    }

}
int full(QUEUE *q)
{
    if(q->rear==MAXQUEUE-1)
    {
        return TRUE;
    }
    else{
        return FALSE;
    }

}
void display(QUEUE *q)
{
int i;
 if(empty(q))
    {
        printf("\nStack is empty!!");
    }
for(i=q->front;i<=q->rear;i++)
{
    printf("%d\n",q->items[i]);
}
    return;
}
void enqueue(QUEUE *q)
{
    if(full(q))
    {
        printf("queue is full\n");
        return;
    }
    printf("Enter the element to enqueue\n");
    int x;
    scanf("%d",&x);
    q->rear++;
    q->items[q->rear]=x;
    printf(" successfull \n");
    return;
}
void dequeue(QUEUE *q)
{
    if(empty(q))
    {
        printf("queue is empty\n");
        return;
    }
    int x;
    x=q->items[q->front];
    q->front++;
    printf(" sucessfull \n");
    return;
}
int main()
{
    QUEUE q;
    q.front =0;
    q.rear =-1;
    int choice=0;
     while(1)
    {
        printf("**menu**\n");
        printf("1-Enqueue\n2-Dequeue\n3-Display\n4-exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : enqueue(&q);
            break;
             case 2 : dequeue(&q);
            break;
             case 3 : display(&q);
            break;
             case 4 : exit(0);
           }
}
}

