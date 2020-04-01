#include "message_service.h"

void initialize_stacks(STACK *ps1, STACK *ps2)
{
    ps1->top = -1;
    ps2->top = -1;

    ps1->active = 1;
    ps2->active = 0;

    ps1->top++;
    strcpy(ps1->items[0].message_data,"Buffee Lunch");
    ps1->items[0].hour[0] = 1;
    ps1->items[0].hour[1] = 2;

    ps1->top++;
    strcpy(ps1->items[1].message_data,"CINEPOLIS");
    ps1->items[0].hour[0] = 12;
    ps1->items[0].hour[1] = 3;

    ps1->top++;
    strcpy(ps1->items[2].message_data,"RELIANCE TRENDS");
    ps1->items[0].hour[0] = 11;
    ps1->items[0].hour[1] = 4;

    ps1->top++;
    strcpy(ps1->items[3].message_data,"KIDZ WORLD");
    ps1->items[0].hour[0] = 10;
    ps1->items[0].hour[1] = 5;

    ps1->top++;
    strcpy(ps1->items[4].message_data,"COFFEE DAY");
    ps1->items[0].hour[0] = 9;
    ps1->items[0].hour[1] = 6;

    ps1->top++;
    strcpy(ps1->items[5].message_data,"JUST BAKE");
    ps1->items[0].hour[0] = 9;
    ps1->items[0].hour[1] = 6;

    /// Initialize the remaining the stack elements

}

int empty(STACK *ps)
{
 if (ps->top == -1)
        return 1;
    else
        return 0;

}
void view_current_message(STACK *ps1, STACK *ps2)
{if(ps1->active==1)
{
  peek(ps1);
}
else
{
   peek(ps2);
}

}

void update_hour(STACK *ps1, STACK *ps2)
{
if(ps1->active==1)
{
  push(ps2,pop(ps1));
}
if(ps2->active==1)
{
  push(ps1,pop(ps2));
}
if(empty(ps1))
{
    ps2->active=1;
    ps1->active=0;
}
if(empty(ps2))
{
    ps1->active=1;
    ps2->active=0;
}
}


void push(STACK * ps, struct message s)
{
    ps->top++;
strcpy(ps->items[ps->top].message_data,s.message_data);
ps->items[ps->top].hour[0] = s.hour[1];
ps->items[ps->top].hour[1] = s.hour[0];

}

struct message pop(STACK *ps)
{
    struct message x;
x=ps->items[ps->top];
ps->top--;
return(x);
}


void peek( STACK *ps)
{
if(empty(ps))
{
printf("the stack is empty\n");
}
printf("%s\n",ps->items[ps->top].message_data);
}


void print( STACK *ps1, STACK *ps2)
{
    int i = 0, j = 0;

    if(ps1->active == 1)
        printf("%s", "Stack1 is Active\n");
    else
        printf("%s", "Stack2 is Active\n");

    if(empty(ps1))
    {
        printf("%s", "Stack1 is empty\n");
    }
    else
    {
        printf("%s", "\nThe stack elements of first stack are listed below:\n");
        for(i = ps1->top ; i >= 0 ; i--)
        {
            printf("%s\n", ps1->items[i].message_data);
        }
    }

    if(empty(ps2))
    {
        printf("%s", "\n\nStack2 is empty\n");
    }
    else
    {
        printf("%s", "\nThe stack elements of second stack are listed below:\n");
        for(j = ps2->top ; j >= 0 ; j--)
        {
            printf("%s\n", ps2->items[j].message_data);
        }

    }
}
