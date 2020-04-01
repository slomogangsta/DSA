#include <stdio.h>
#include<stdlib.h>
#define STACKSIZE 5
#define TRUE 1
#define FALSE 0

struct stack
{
    int top;
    int items[STACKSIZE];
};
typedef struct stack STACK;
int empty(STACK *s)
{
    if(s->top==-1)
    {
        return TRUE;
    }
    else {
        return FALSE ;
    }
}
int full(STACK *s)
{
    if(s->top==(STACKSIZE-1))
    {
        return TRUE;
    }
    else {
        return FALSE ;
    }
}
void push(STACK *s)
{

    if(full(s))
    {
        printf("stack is full");

    }
    printf("enter the element to be inserted");
    int x;
    scanf("%d",&x);
    s->items[++s->top]=x;
    printf("push sucessfull\n");
    return ;
}
void pop(STACK *s)
{

    if(empty(s))
    {
        printf("stack is empty");

    }
int x;
x=s->items[s->top];
s->top--;
printf("pop sucessfull\n");
return ;
}
void peek(STACK *s)
{
    if(empty(s))
    {
        printf("stack is empty");
return;
    }
int x;
x=s->items[s->top];
printf("%d",x);
return ;
}
void print(STACK *s)
{
int i;
 if(empty(s))
    {
        printf("\nStack is empty!!");
    }
for(i=s->top;i>=0;i--)
{
    printf("%d\n",s->items[i]);
}
    return;
}
int main()
{
    STACK s;
    s.top=-1;
    int choice=0;
    while(1)
    {
        printf("**menu**\n");
        printf("1-push\n2-pop\n3-peek\n4-print\n5-exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : push(&s);
            break;
             case 2 : pop(&s);
            break;
             case 3 : peek(&s);
            break;
             case 4 : print(&s);
            break;
             case 5 : exit(0);


        }
    }
}
