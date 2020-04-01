/**
Title: The Return of ' Lord of the Ring's '
Name:Yeshwanth Kumar V S
Roll Number:271
SRN:01FE17BCS245
**/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define TRUE 1/**following standards**/
#define FALSE 0/**following standards**/
/**globally declaring these variables as i am going to use them again in brew function and during inserting hence i don't want its scope
to be restricted**/
int fluxweed=0;/** these variables are declared to maintain the count of the respective ingredient name they hold during the insertion of it**/
int knotgrass=0;/** these variables are declared to maintain the count of the respective ingredient name they hold during the insertion of it**/
int leeches=0;/** these variables are declared to maintain the count of the respective ingredient name they hold during the insertion of it**/
int flies=0;/** these variables are declared to maintain the count of the respective ingredient name they hold during the insertion of it**/
int horn=0;/**these variables are declared to maintain the count of the respective ingredient name they hold during the insertion of it**/
char name[30]="0";/** this is to compare the ingredients taken are those that are need**/
int i=0;/** this variable is to help the loop to assure we give sufficient time for all the ingredients collection**/
int flag=0;/** this variable is to help the loop to assure we give sufficient time for all the ingredients collection**/
struct prolific_potion
{
    char ingredient[30];
    int quantity;
    struct prolific_potion * prev;
    struct prolific_potion * next;
};

typedef struct prolific_potion PP;

PP * gather_ingredients(PP *);
void brew(PP *);

/**
Function Name: gather_ingredients
Input Params:  The starting address of the node where collected ingredients will be added
               one by one as collected
Return Type:   Updated starting address
Description:   Collect the input one by one and add the node to the end of the list.
               You need to add a routine that will check if we have required quantity
               of desired ingredients. Till then keep collecting the input.
**/
PP * gather_ingredients(PP * process )
{
do{
PP * new_item;
new_item = (PP*)malloc(sizeof(PP));
if(new_item==NULL)
{
    printf("Your system doesn't want the world to be saved! :-( \n");
    return process;
}
printf("Add the ingredient\n");
scanf("%s",name);
strcpy(new_item->ingredient,name);/**strings cant be assigned using pointers they must be copied**/
printf("Add the quantity\n");
scanf("%d",&new_item->quantity);/**this will let us know how many ingredients are being taken in at once**/
new_item->next=NULL;
new_item->prev=NULL;
if(strcmp(name,"fluxweed"))/**count of their respective counter variables are bring incremented for further reference of it in the program**/
{
    fluxweed=fluxweed+new_item->quantity;
    printf("%d\n",fluxweed);
}
if(name=="knotgrass")/**count of their respective counter variables are bring incremented for further reference of it in the program**/
{
    knotgrass=knotgrass+new_item->quantity;
     printf("%d\n",knotgrass);
}
if(name=="leeches")/**count of their respective counter variables are bring incremented for further reference of it in the program**/
{
    leeches=leeches+new_item->quantity;
     printf("%d\n",leeches);
}
if(name=="lacewing")/**count of their respective counter variables are bring incremented for further reference of it in the program**/
{
    flies=flies+new_item->quantity;
     printf("%d\n",flies);
}
if(name=="bicorn")/**count of their respective counter variables are bring incremented for further reference of it in the program**/
{
    horn=horn+new_item->quantity;
    printf("%d\n", horn);
}

if(process==NULL)/**as being the first one to be chosen**/
{
    process=new_item;

}
else{
    PP * temp;/**to find the end of your item list**/
    temp=process;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_item;
    new_item->prev=temp;

}
i=i+new_item->quantity;
if(new_item->quantity==0)
{
    flag=1;
}
}while(flag!=1);/**This loop ensures that sufficient time is given for sufficient collection of all the ingredients**/
return process;
}




/**
Function Name: brew
Input Params:  The starting address of the node where collected ingredients are available
Return Type:   NILL
Description:   brew the materials in order as specified:
               30 cups of fluxweed
               20 bundles of knotgrass
               42 leeches
               50 Lacewing flies
               9 Bicorn horn
               The ingredients may be available in different nodes at various positions
**/
void brew(PP * process)
{
if(fluxweed>=30&&knotgrass>=20&&leeches>=42&&flies>=50&&horn>=9)
{
int count=0 ;
PP * temp=process;/** to transverse through the list to search for the ingredients**/
PP * temp1=process;/**to ensure that temp is not lost during deletion process**/
 while(temp->next==NULL)
{ temp1=temp;
    if(count<=30)
{
    if(temp->ingredient=="fluxweed")
    {
        count=count+temp1->quantity;/**to take care such that no more than the specified amount of ingredients go
                                                 in and stop us from saving the world**/
       temp1->prev=temp->next->prev;/**people who know to make potions must know basic DSA or else he isn't eligible for it**/
        temp1->prev->next=temp1->next;/**psst if you don't know than this is how we delete a element from nth place
                                          in doubly linked list**/
        temp=temp->next;
        free(temp1);/**free space should be let go**/
    }
}

printf("All the fluxweed are added! \n");
}
count=0;
temp=process;
temp1=process;
while(temp->next==NULL)
{ temp1=temp;
    if(count<=20)
{
    if(temp->ingredient=="knotgrass")
    {
        count=count+temp1->quantity;/**to take care such that no more than the specified amount of
                                      ingredients go in and stop us from saving the world**/
       temp1->prev=temp->next->prev;/**people who know to make potions must know basic DSA or else he isn't eligible for it**/
        temp1->prev->next=temp1->next;/**psst if you don't know than this is how we delete a element from nth place
                                          in doubly linked list**/
      temp=temp->next;
        free(temp1);/**free space should be let go**/
    }
}

}
count=0;
temp=process;
temp1=process;
while(temp->next==NULL)
{ temp1=temp;
    if(count<=42)
{
    if(temp->ingredient=="leeches")
    {
        count=count+temp1->quantity;/**to take care such that no more than the specified amount of ingredients go
                                          in and stop us from saving the world**/
       temp1->prev=temp->next->prev;/**people who know to make potions must know basic DSA or else he isn't eligible for it**/
        temp1->prev->next=temp1->next;/**psst if you dont know than this is how we delete a element from nth place
                                          in doubly linked list**/
                                          temp=temp->next;
        free(temp1);/**free space should be let go**/
    }
}

}
count=0;
temp=process;
temp1=process;
while(temp->next==NULL)
{ temp1=temp;
    if(count<=50)
{
    if(temp->ingredient=="lacewing")
    {
        count=count+temp1->quantity;/**to take care such that no more than the specified amount of ingredients go
                                          in and stop us from saving the world**/
       temp1->prev=temp->next->prev;/**people who know to make potions must know basic DSA or else he isn't eligible for it**/
        temp1->prev->next=temp1->next;/**psst if you don't know than this is how we delete a element from nth place
                                          in doubly linked list**/
       temp=temp->next;
        free(temp1);/**free space should be let go**/
    }
}

}
while(temp->next==NULL)
{ temp1=temp;
    if(count<=9)
{
    if(temp->ingredient=="bicorn")
    {
        count=count+temp1->quantity;/**to take care such that no more than the specified amount of ingredients go
                                          in and stop us from saving the world**/
       temp1->prev=temp->next->prev;/**people who know to make potions must know basic DSA or else he isn't eligible for it**/
        temp1->prev->next=temp1->next;/**psst if you don't know than this is how we delete a element from nth place
                                          in doubly linked list**/
       temp=temp->next;
        free(temp1);/**free space should be let go**/
    }
}

}
}
else
{
    printf("saving the world is important not the money -_- \n go get the ingredients soon!! >.< \n");

}
}


int main()
{
    PP *process = NULL;

    printf("\nThe preparation has begin at...\n");
    time_t start;
    start = time(NULL);
    printf(ctime(&start));
    printf("\n\n");

    /// Call the functions to gather, melt and prepare
    printf(" Enter input as following\n 'flexweed' for flexweed\n 'knotgrass' for knotgrass\n 'leeches' for leeches\n 'flies' for Lacewing flies\n 'horn' for Bicorn horn " );
    printf("Enter quantity as 0 when sufficient ingredients are collected\n");
    process = gather_ingredients(process);
    brew(process);

    printf("\nThe POTION is ready, The dark army can now be defeated again!\n");
    printf("\n\n");

    printf("\nThe preparation ended at...\n");
    time_t end;
    end = time(NULL);
    printf(ctime(&end));
    printf("\n\n");

    return 0;
}
