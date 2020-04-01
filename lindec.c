#define SIZE 100
#define TRUE 1
#define FALSE 0
#include<stdio.h>
#include<stdlib.h>

struct deck
{
    int front;
    int rear;
    int items[SIZE];
};
typedef struct deck D;

int empty(D *d)
{
    if(d->rear<d->front)
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
    if(d->rear==SIZE-1)
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}

void enqueuerear(D *d)
{
    if(full(d))
    {
        printf("the queue is full\n");
        return;
    }
    int x;
    printf("enter the element to be enqueued \n");
    scanf("%d",&x);
    d->rear++;
    d->items[d->rear]=x;
    printf("%d is successfully inserted \n",x);
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
    d->rear--;
    printf("%d is successfully deleted\n",x);
    return;
}

void enqueuefront(D *d)
{
    if(full(d))
    {
        printf("the queue is empty\n");
        return;
    }
    if(d->front!=0)
    {
       int x;
    printf("enter the element to be enqueued \n");
    scanf("%d",&x);
    d->front--;
    d->items[d->front]=x;
    printf("%d is successfully inserted \n",x);
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
        printf("the queue is empty \n");
        return;
    }
    int x;
    x=d->items[d->front];
    d->front++;
    printf("%d is successfully deleted\n ",x);
}

void display(D *d)
{
    if(empty(d))
    {
        printf("the queue is empty\n");
        return;
    }
    int i;
    for(i=d->front;i<=d->rear;i++)
    {
        printf("%d\t",d->items[i]);
    }
    printf("\n");
    return;
}

int main()
{
    D d;
    d.front=0;
    d.rear=-1;
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

