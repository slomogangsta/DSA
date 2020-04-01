#define SIZE 100
#define TRUE 1
#define FALSE 0
#include<stdio.h>
#include<stdlib.h>

struct queue
{
int items[100];
int front;
int rear;
};
typedef struct queue Q;

int empty(Q *q)
{
    if(q->rear<q->front)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int full(Q *q)
{
    if(q->rear==SIZE-1)
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}

void enqueue(Q *q)
{
if(full(q))
{
    printf("The queue is full\n");
    return;
}
int x;
printf("enter the element to be enqueued \n");
scanf("%d",&x);
q->rear++;
q->items[q->rear]=x;
printf("insertion of %d is successful\n",x);
return;
}

void dequeue(Q *q)
{
    if(empty(q))
    {
        printf("queue is full\n");
        return ;
    }
    int x;
    x=q->items[q->front];
    q->front++;
    printf("%d dequeued successfully\n",x);
    return;
}

void display(Q *q)
{
    if(empty(q))
    {
        printf("the queue is empty \n");
        return;
    }
    int i;
    for(i=q->front;i<=q->rear;i++)
    {
        printf("%d\t",q->items[i]);
    }
    printf("\n");
    return;
}

int main()
{
    Q q;
    q.front=0;
    q.rear=-1;
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
