#include <stdio.h>
#include<stdlib.h>
#define MAXQUEUE 5
#define TRUE 1
#define FALSE 0
struct node
{
    int data;
    struct node * next;
};
typedef struct node NODE;
NODE * is(NODE *start)
{
    NODE *newnode;
    newnode=(NODE *)malloc(sizeof(NODE));
    if(newnode==NULL)
    {

        printf("memory allocation failed\n");
        return start;
    }
    printf("enter the data\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(start==NULL)
    {
        start=newnode;
        return start;
    }
    else
    {

        newnode->next=start;
        start=newnode;
    }
    return start;
    /* if(start!=NULL)
    newnode->next=start;
    return newnode;*/
}
NODE * ie(NODE *start)
{
    NODE *temp;
    NODE *newnode;
    newnode=(NODE *)malloc(sizeof(NODE));
    if(newnode==NULL)
    {

        printf("memory allocation failed\n");

    }
    printf("enter the data\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(start==NULL)
    {
        start=newnode;
        return start;
    }
    else
    {temp=start;
    while(temp->next!=NULL)
    {
       temp=temp->next;
    }
temp->next=newnode;
    }
    return start;
}
NODE * ds(NODE *start)
{
    if(start==NULL)
    {
        printf("stack is empty");
        return start;
    }
    if(start->next==NULL)
    {
        free(start);
        start=NULL;
        return start;
    }
    NODE * temp=start;
    start=start->next;
    free(temp);
return start;
}
NODE * de(NODE *start)
{
if(start==NULL)
    {
        printf("stack is empty");
        return start;
    }
NODE *p=NULL;
NODE *c=start;
while(c->next!=NULL)
{
    p=c;
    c=c->next;
}
free(c);
p->next=NULL;
return start;
}
NODE * dis(NODE *start)
{
NODE * temp=start;
while(temp!=NULL)
{
    printf("%d-->\n",temp->data);
    temp=temp->next;
}
    return start;
}


int main()
{
    NODE *start=NULL;
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
    return 0;
}
