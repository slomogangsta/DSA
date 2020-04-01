#define SIZE 100
#define TRUE 1
#define FALSE 0
#include<stdio.h>
#include<stdlib.h>

struct cdeck
{
    int front;
    int rear;
    int items[SIZE];
};
typedef struct cdeck D;

int empty(D *d)
{
    if(d->front==d->rear)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int full(D *d)
{
    if(d->front==(d->rear+1)%SIZE)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

void enqueuerear(D *d)
{
    if(full(d))
    {
        printf("the queue is ful \n");
        return;
    }
    int x;
    printf("enter the item to enqueue\n");
    scanf("%d",&x);
    d->rear=(d->rear+1)%SIZE;
    d->items[d->rear]=x;
    printf("%d is successfully enqueued\n",x);
    return;
}

void enqueuefront(D *d)
{
    if(full(d))
    {
      printf("the queue is ful \n");
        return;
    }
    if(d->front!=0)
    {
    int x;
    printf("enter the item to enqueue\n");
    scanf("%d",&x);
    d->items[d->front]=x;
    d->front=(d->front-1)%SIZE;

    printf("%d is successfully enqueued\n",x);
    return;
    }
    else{
        printf("insertion not possible\n");
        return;
    }
}

void dequeuefront(D *d)
{
    if(empty(d))
    {
        printf("the queue is empty\n");
        return;
    }
    int x;
    d->front=(d->front+1)%SIZE;
    x=d->items[d->front];
    printf("%d is successfully dequeued\n",x);
    return;
}

void dequeuerear(D *d)
{
    if(empty(d))
    {
        printf("the queue is empty\n");
        return;
    }
    int x;
    x=d->items[d->rear];
    d->rear=(d->rear-1+SIZE)%SIZE;
    printf("%d is successfully dequeued\n",x);
    return;
}

void display(D *d)
{
    if(empty(d))
    {
        printf("the queue is empty\n");
        return;
    }
    int i;
    if(d->front>d->rear)
    {
        for(i=d->front+1;i<=SIZE-1;i++)
        {
            printf("%d\t",d->items[i]);
        }
        for(i=0;i<=d->rear;i++)
        {
            printf("%d\t",d->items[i]);
        }
        printf("\n");
        return;
    }
    if(d->front<d->rear)
    {
        for(i=d->front+1;i<=d->rear;i++)
        {
           printf("%d\t",d->items[i]);
        }
        printf("\n");
        return;
    }
}

int main()
{
    D d;
    d.front=SIZE-1;
    d.rear=SIZE-1;
    int choice;
    while(1)
    {
     printf("1-Enqueuerear\n2-Dequeuerear\n3-Enqueuefront\n4-Dequeuefront\n5-Display\n6-Exit\nEnter your choice\n");
    scanf("%d",&choice);
    switch(choice)
        {
            case 1: enqueuerear(&d);
                    break;

            case 2:
                    dequeuerear(&d);
                    break;

            case 3: enqueuefront(&d);
                    break;

            case 4:
                    dequeuefront(&d);
                    break;

            case 5: display(&d);
                    break;

            case 6: exit(0);
                    break;

            default : printf("Enter valid data \n");
                        break;
        }

    }
return 0;
}
