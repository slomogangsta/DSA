#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 1000
struct singly
{
    int start;
int data[MAXSIZE][2];
};
struct queue
{
int front1;
int front2;
int rear1;
int rear2;
struct singly items;
};
struct stack
{
int top;
struct queue q;
};
typedef struct stack STACK;
/*---------------------------------------------------------------
Function Name:  insert at the end of list
Input Param:    one pointer variable
Return Type:    value of start
Description:    adds an element at the end of a linked list and
                returns start
-----------------------------------------------------------------*/

int insertae(STACK *s)
{
    int i=0;
int n;
scanf("%d",&n);
while(s->q.items.data[1][i]!=0)
{
    i++;
}
//a[i] will be the last element in the array hence i+1 will be empty for insertion
s->q.items.data[0][i+1]=n;
//address node of the a[i] element must hold the address of its next node
s->q.items.data[1][i]=&s->q.items.data[0][i+1];
return s->q.items.start;

}
/*---------------------------------------------------------------
Function Name:  insert at the start of list
Input Param:    one pointer variable
Return Type:    value of start
Description:    adds an element at the start of a linked list and
                returns the updated start start
-----------------------------------------------------------------*/
int insertas(STACK *s)
{
    int i=0;
    int n=0;
    for(i=0;i<MAXSIZE;i++)
    {
//shifting all the elements of the data column by one position
        s->q.items.data[0][i+1]=s->q.items.data[0][i];
//shifting all the elements of the address column by one position
        s->q.items.data[1][i+1]=s->q.items.data[1][i];
    }
    scanf("%d",&n);
    s->q.items.data[0][0]=n;
    s->q.items.data[1][0]=&s->q.items.data[0][0];
    //the start should be updated to the new element updated
    s->q.items.start=&a[0];
return s->q.items.start;
}
int main()
{
    int i=0;
    STACK s;
//initializing all the elements of address column to 0
for(i=0;i<MAXSIZE;i++)
{
  s.q.items.data[1][i]=0;
}
s.q.items.start=0;
return 0;
}
