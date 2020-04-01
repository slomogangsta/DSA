#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;

NODE* addstart(NODE * start)
{
    int data;
    printf("enter the data \n");
    scanf("%d",&data);
    NODE * newnode;
    newnode=(NODE*) malloc(sizeof(NODE));
    if(newnode==NULL)
    {
        printf("memory allocation failed \n");
        return start;
    }
    newnode->data=data;
    newnode->next=NULL;
    if(start==NULL)
    {
        start=newnode;
        return start;
    }
    newnode->next=start;
    start=newnode;
    printf("node added at the start successfully\n");
    return start;
}

NODE * addend(NODE *start)
{
    NODE * newnode;
    newnode=(NODE*) malloc(sizeof(NODE));
    if(newnode==NULL)
    {
        printf("memory allocation failed \n");
        return start;
    }
    printf("enter the data \n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(start==NULL)
    {
        start=newnode;
        return start;
    }
    NODE *temp;
    temp=start;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    printf("node added at the end successfully\n");
    return start;
}

NODE * delstart(NODE *start)
{
    if(start==NULL)
    {
        printf("the list is empty\n");
        return start;
    }
    NODE *temp=start;
    start=start->next;
    free(temp);
    printf("node deleted from the start successfully\n");
    return start;
}

NODE * delend(NODE *start)
{
    if(start==NULL)
    {
        printf("the list is empty\n");
        return start;
    }
    NODE *temp=start;
    NODE *prev=NULL;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    free(temp);
    printf("node deleted from the end successfully\n");
    return start;
}

int display(NODE * start)
{
    if(start==NULL)
    {
        printf("the list is empty\n");
        return;
    }
    int count=0;
    while(start!=NULL)
    {
        printf("%d\t",start->data);
        start=start->next;
        count++;
    }
    printf("\n");
    return count;
}

NODE * addany(NODE * start)
{
NODE * newnode=NULL;
newnode=(NODE*)malloc(sizeof(NODE));
if(newnode==NULL)
{
    printf("memory allocation failed \n");
    return start;
}
int data,pos;
printf("enter the data and the position of insertion\n");
scanf("%d%d",&data,&pos);
int x;
x=display(start);
if(pos>x)
{
    printf("position not in range\n");
    return start;
}
if(pos==0)
{
newnode->data=data;
    newnode->next=NULL;
    if(start==NULL)
    {
        start=newnode;
        return start;
    }
    newnode->next=start;
    start=newnode;
    printf("node added at the start successfully\n");
    return start;
}
if(pos==x)
{
newnode->data=data;
    newnode->next=NULL;
    if(start==NULL)
    {
        start=newnode;
        return start;
    }
    NODE *temp;
    temp=start;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    printf("node added at the end successfully\n");
    return start;
}
int count=0;
NODE *temp=start;
NODE *prev=NULL;
while(count!=pos)
{
prev=temp;
count++;
temp=temp->next;
}
newnode->data=data;
newnode->next=prev->next;
prev->next=newnode;
return start;
}


NODE * delany(NODE *start)
{

}

int main()
{
    NODE * start=NULL;
    int choice;
    while(1)
    {
     printf("1-Add a node at the start\n2-Add a node at the end \n3-Add a node anywhere\n4-delete a node from the start\n5-delete a node from the end\n6-delete a node from anywhere\n7-display list contents\n8-exit\nEnter your choice\n");
    scanf("%d",&choice);
    switch(choice)
        {
            case 1: start=addstart(start);
                    break;

            case 2:
                    start=addend(start);
                    break;

            case 3: start=addany(start);
                    break;

            case 4: start=delstart(start);
                    break;

            case 5: start=delend(start);
                    break;

            case 6: start=delany(start);
                    break;

            case 7: display(start);
                    break;

            case 8: exit(0);
                    break;

            default : printf("Enter valid data \n");
                        break;
        }

    }
return 0;
}
