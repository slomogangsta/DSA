#define SIZE 100
#define TRUE 1
#define FALSE 0
#include<stdio.h>
#include<stdlib.h>

struct stack
{
int top;
int items[SIZE];
};
typedef struct stack ST;

int empty(ST *s)
{
    if(s->top==-1)
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}

int full(ST *s)
{
    if(s->top==SIZE-1)
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}

void push(ST *s)
{
    if(full(s))
    {
        printf("the stack is full\n");
        return ;
    }
    int x;
    printf("enter the data to be pushed into the stack\n");
    scanf("%d",&x);
    s->top++;
    s->items[s->top]=x;
    printf("%d Push successful\n",x);
}

void pop(ST * s)
{
    if(empty(s))
    {
        printf("the stack is empty \n");
        return;
    }
    int x;
    x=s->items[s->top];
    s->top--;
    printf("%d is successfully popped \n",x);
    return;

}

void peek(ST *s)
{
   if(empty(s))
    {
        printf("the stack is empty \n");
        return;
    }
    int x;
    x=s->items[s->top];
    printf("%d\n");
    return;

}

void display(ST *s)
{
    int i;
    for(i=s->top;i>=0;i--)
    {
        printf("%d\t",s->items[i]);
    }
    printf("\n");
    return;
}
int main()
{
    ST s;
    s.top=-1;
    int choice=0;
    while(1)
    {
     printf("1-push\n2-pop\n3-peek\n4-display\n5-exit\nEnter your choice\n");
    scanf("%d",&choice);
    switch(choice)
        {
            case 1: push(&s);
                    break;

            case 2:
                    pop(&s);
                    break;

            case 3: peek(&s);
                    break;

            case 4: display(&s);
                    break;

            case 5: exit(0);
                    break;
            default : printf("Enter valid data \n");
                        break;
        }

    }

    return 0;
}
