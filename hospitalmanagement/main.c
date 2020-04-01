#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#include<time.h>

struct patient
{

    int preg;

    char name[30];

    int type;

    int dreg;

    struct patient * prev;

    struct patient * next;

};

typedef struct patient P;

struct doctor
{

    int dreg;

    char name[30];

    int assign[15];

    struct doctor * prev;

    struct doctor * next;

};


typedef struct doctor D;

struct bill

{

    int preg;

    char purpose[40];

    int amount;

    struct bill * prev;

    struct bill * next;

};

typedef struct bill B;

P * addNode(P* start, int preg , char *name ,int type ,int dreg)

{

    P *newnode=(P *)malloc(sizeof(P));

    if(newnode == NULL)

    {
        printf("\nMemory allocation failed");

        return start;

    }

    newnode->dreg=dreg;

    strcpy(newnode->name,name);

    newnode->preg=preg;

    newnode->type=type;

    newnode->next=NULL;

    newnode->prev=NULL;

    if (start == NULL)

    {
        //printf("\nAdded first patient");

        newnode->prev=NULL;

        start=newnode;

        return start;

    }

    else if(start->next==NULL)

    {
        //printf("\nAdded second node\n");

        newnode->prev=start;

        start->next=newnode;

        return start;

    }

    else

    {
        P *temp;

        temp=start;

        while(temp->next != NULL)

        {

            temp=temp->next;

        }
        temp->next=newnode;

        newnode->prev=temp;

        return start;

    }
}


P * deleteNode(P * start,int key)

{
    P *curr =start;

    P *pree=NULL;

    int f=0;

    if(start==NULL)

    {

        printf("the list is empty \n");

        return start;

    }

    else if(start->next==NULL&&start->preg==key)

    {

    free(start);

    printf("patient successfully deleted \n");

    start=NULL;

    return start;

    }

    else

    {

        if(start->preg==key)

       {

        start=curr->next;

          curr->next->prev=NULL;

          free(curr);

          printf("patient deleted successfully\n");

          return start;

        }

    else

    {
         while(curr!=NULL)

        {
           if(curr->preg==key)
            {
                if(curr->next!=NULL)

                {

        pree->next=curr->next;

        curr->next->prev=pree;

        printf("patient deleted successfully\n");

        free(curr);

        f=1;

        return start;

                }

                else

                {

                  pree->next=NULL;

                  free(curr);

                  printf("patient deleted successfully\n");

                  return start;

                }


        }
             pree=curr;
            curr=curr->next;

        }
}


    }

 if(f==0)

    {
        printf("patient not found\n");


    }

     return start;
}

int searchNode(P * start, int key)

{
    P * curr = start;

    int f=0;

         while(curr != NULL)

         {
                if(curr->preg==key)

                    {

                    printf("The patient is found\n");

                    printf("Register number: %d\n", curr->preg);

                    printf("Name : %s\n", curr->name );

                    if(curr->type==0)
                    {

                     printf("Out patient\n");

                    }

                    else
                    {

                    printf("In patient\n");

                    }

                    printf("Register number of doctor : %d\n", curr->dreg );

                    f=1;

                    break;

                    }

                    curr=curr->next;
         }
        if(f==0)

        {

          printf("patient not found\n");

        }


return 0;

}

D * addNode1(D* start, int dreg , char *name )

{

    D *newnode=(D *)malloc(sizeof(D));

    if(newnode == NULL)

    {

        printf("\nMemory allocation failed");

        return start;

    }

    newnode->dreg=dreg;

    strcpy(newnode->name,name);

    newnode->next=NULL;

    newnode->prev=NULL;

    if (start == NULL)

    {
        //printf("\nAdded first patient");

        newnode->prev=NULL;

        start=newnode;

        return start;

    }

    else if(start->next==NULL)

    {
        //printf("\nAdded second node\n");

        newnode->prev=start;

        start->next=newnode;

        return start;

    }

    else

    {
        D *temp;

        temp=start;

        while(temp->next != NULL)

        {

            temp=temp->next;

        }

        temp->next=newnode;

        newnode->prev=temp;

        return start;

    }
}

D * deleteNode1(D * start,int key)

{
    D *curr =start;

    D *pree=NULL;

    int f=0;

    if(start==NULL)

    {

        printf("the list is empty \n");

        return start;

    }

    else if(start->next==NULL&&start->dreg==key)

    {

       free(start);

       printf("doctor deletion successful\n");

       start=NULL;

       return start;

    }

    if(start->dreg==key)

       {

        start=curr->next;

          curr->next->prev=NULL;

          free(curr);

          printf("Doctor deleted successfully\n");

          return start;

        }

    else

    {
         while(curr!=NULL)

        {
           if(curr->dreg==key)
            {
                if(curr->next!=NULL)

                {

        pree->next=curr->next;

        curr->next->prev=pree;

       printf("Doctor deleted successfully\n");

        free(curr);

        f=1;

        return start;

                }

                else

                {

                  pree->next=NULL;

                  free(curr);

                  printf("Doctor deleted successfully\n");

                  return start;

                }


        }
             pree=curr;
            curr=curr->next;

        }
}

 if(f==0)

    {
        printf("doctor not found\n");


    }

     return start;
}

void display(P * start)

{
    P * curr = start;

    if (curr==NULL)

    {

        printf("\nNo patients registered yet");

    }
         while(curr != NULL)

         {
                    printf("Register number: %d\n",curr->preg);

                    printf("Name : %s\n",curr->name );

                    if(curr->type==0)

                    {

                        printf("Out patient\n");

                    }

                    else
                    {

                       printf("In patient\n");

                    }

                    printf("Register number of doctor : %d\n",curr->dreg );

                    printf("\n\n");

                    curr=curr->next;

         }
}

void display1(D * start)

{

    D * curr = start;

    if (curr==NULL)

    {

        printf("\nNo doctors\n");

    }
         while(curr != NULL)

         {
                    printf("Register number of doctor: %d\n",curr->dreg);

                    printf("Name : %s\n",curr->name );

                    printf("\n\n");

                    curr=curr->next;

         }
}

void display2(B * start)

{

    B * curr = start;

    if (curr==NULL)

    {

        printf("\nNo bills\n");

    }
         while(curr != NULL)

         {
                    printf("Register number of patient: %d\n",curr->preg);

                    printf("purpose : %s\n",curr->purpose );

                    printf("amount : %d\n",curr->amount);

                    printf("\n\n");

                    curr=curr->next;

         }
}

int searchNode1(D * start, int key)

{
    D * curr = start;

    int f=0;

         while(curr != NULL)

         {
                if(curr->dreg==key)

                    {

                    printf("The doctor is found\n");

                    printf("Register number: %d\n", curr->dreg);

                    printf("Name : %s\n", curr->name );

                    f=1;

                    break;

                    }

                    curr=curr->next;
         }
        if(f==0)

        {

          printf("doctor not found\n");

        }


return 0;

}

B * addNode2(B* start, int preg , char *purpose ,int amount)

{

    B *newnode=(B *)malloc(sizeof(B));

    if(newnode == NULL)

    {
        printf("\nMemory allocation failed");

        return start;

    }

    strcpy(newnode->purpose,purpose);

    newnode->preg=preg;

    newnode->amount=amount;

    newnode->next=NULL;

    newnode->prev=NULL;

    if (start == NULL)

    {
        //printf("\nAdded first patient");

        newnode->prev=NULL;

        start=newnode;

        return start;

    }

    else if(start->next==NULL)

    {
        //printf("\nAdded second node\n");

        newnode->prev=start;

        start->next=newnode;

        return start;

    }

    else

    {
        B *temp;

        temp=start;

        while(temp->next != NULL)

        {

            temp=temp->next;

        }
        temp->next=newnode;

        newnode->prev=temp;

        return start;

    }
}


B * deleteNode2(B * start,int key,int key1)

{

B *curr =start;

    B *pree=NULL;

    int f=0;

    if(start==NULL)

    {

        printf("the list is empty \n");

        return start;

    }

    else if(start->next==NULL&&start->preg==key&&start->amount==key1)

    {
        free(start);

        printf("bill payment successful\n");

        start=NULL;

        return start;
    }

    else
    {
          if(start->preg==key&&start->amount==key1)

       {

        start=curr->next;

          curr->next->prev=NULL;

          free(curr);

          printf("bill payment successful\n");

          return start;

        }

    else

    {
         while(curr!=NULL)

        {
           if(curr->preg==key&&curr->amount==key1)
            {
                if(curr->next!=NULL)

                {

        pree->next=curr->next;

        curr->next->prev=pree;

       printf("bill payment successful\n");

        free(curr);

        f=1;

        return start;

                }

                else

                {

                  pree->next=NULL;

                  free(curr);

                  f=1;

                  printf("bill payment successful\n");

                  return start;

                }


        }
             pree=curr;
            curr=curr->next;

        }
}

    }


 if(f==0)

    {
        printf("patient not found\n");


    }

     return start;

}

B * totaldel(B * start,int key)

{

B *temp=start;

B *curr=start;

B *pree=NULL;

while(temp!=NULL)

{

temp=temp->next;

if(start==NULL)

{

    printf("the list is empty \n");

    return start;

}

if(temp->preg==key)

{

    if(curr==start&&curr->next==NULL)

    {

        free(start);

        start=NULL;

        printf("bill payment successful\n");

        return start;

    }

    else if(curr==start&&curr->next!=NULL)

    {

        start=curr->next;

        curr->next->prev=NULL;

        free(curr);

        printf("bill payment successful\n");

        curr=temp;


    }

    else if(curr->next!=NULL)

    {

        curr->next->prev=curr->prev;

        curr->prev->next=curr->next;

        free(curr);

        printf("bill payment successful\n");

        curr=temp;

    }

    else

    {

       pree->next=NULL;

       free(curr);

    }

}

pree=curr;

curr=curr->next;



}

return start;

}


P * change_patient_status(P * start , int key)

{

P * curr = start;

int in;

    int f=0;

         while(curr != NULL)

         {
                if(curr->preg==key)

                    {

                    printf("\nThe patient is found\n");

                    printf("Register number: %d\n", curr->preg);

                    printf("Name : %s\n", curr->name );

                    printf("to assign as in patient enter 1\nto assign as out patient enter 0\n ");

                    scanf("%d",&in);

                    curr->type=in;

                    f=1;

                    printf("status is successfully updated \n");

                    return start;

                    }

                    curr=curr->next;
         }
        if(f==0)

        {

          printf("patient not found\n");

        }


return 0;

}

P * count(P * start)

{

P * curr=start;

int in=0;

int out=0;

while(curr!=NULL)
{

    if(curr->type==1)

    {

    in++;

    }

    else

    {

        out++;

    }

    curr=curr->next;

}

printf("\nthe number of in patients are %d\n the number of out patients are %d\n",in,out);

return start;

}

B * total(B * start,int key)

{

int sum=0;

B * curr;

curr=start;

while(curr!=NULL)

{

    if(curr->preg==key)
    {
        sum=sum+curr->amount;

        printf("the number of patient is : %d\n",curr->preg);

        printf("the purpose of the bill is : %s\n",curr->purpose);

        printf("the amount of this bill is : %d\n",curr->amount);

        printf("\n\n");

    }
curr=curr->next;
}

printf("the total bill of the patient is %d\n",sum);

return start;

}

P * read_from_file(P * start)

{
    FILE *fp;

     int preg;

    char name[30];

    int type;

    int dreg;

    fp = fopen("patient-data.txt", "r");

    if(fp == NULL)

    {

        printf("Unable to open file\n");

        return 0;

    }

    // Until we reach the end of the file,

    // Read the numbers from one by one and

    // Insert at the end of the list

    while(1)

    {
        if(feof(fp))

        {

            break;

        }

        fscanf(fp, "%d %s %d %d\n", &preg, name,&type,&dreg);

        start = addNode(start, preg, name,type,dreg);

    }
    fclose(fp);

    printf("\nThe list read from file patient-data is...\n");

    display(start);

    printf("\nYou will be now operating on above list.\n");

    return start;

}

void dump_data(P * start)

{

    FILE *fp;

    fp = fopen("patient-data.txt", "w");

    if(fp == NULL)

    {

        printf("Unable to open file\n");

        return;

    }

    // Dump the list data back to file

     while(start!=NULL)

    {

        fprintf(fp, "%d %s %d %d\n", start->preg, start->name,start->type,start->dreg);

        start = start->next;

    }

    fclose(fp);

}

D * read_from_file1(D * start)

{

    FILE *fp;

    int dreg;

    char name[30];

    fp = fopen("doctor-data.txt", "r");

    if(fp == NULL)

    {

        printf("Unable to open file\n");

        return 0;

    }

    // Until we reach the end of the file,

    // Read the numbers from one by one and

    // Insert at the end of the list

    while(1)

    {
        if(feof(fp))
        {

         break;

        }

        fscanf(fp, "%d %s \n", &dreg, name);

        start = addNode1(start, dreg, name);

    }

    fclose(fp);

    printf("\nThe list read from file doctor-data is...\n");

    display1(start);

    printf("\nYou will be now operating on above list.\n");

    return start;

}

void dump_data1(D * start)

{
    FILE *fp;

    fp = fopen("doctor-data.txt", "w");

    if(fp == NULL)

    {

        printf("Unable to open file\n");

        return;

    }

    // Dump the list data back to file

     while(start!=NULL)

    {

        fprintf(fp, "%d %s \n", start->dreg, start->name);

        start = start->next;

    }

    fclose(fp);

}

B * read_from_file2(B * start)

{
    FILE *fp;

     int preg;

    char purpose[30];

    int amount;

    fp = fopen("bill-data.txt", "r");

    if(fp == NULL)

    {

        printf("Unable to open file\n");

        return 0;

    }

    // Until we reach the end of the file,

    // Read the numbers from one by one and

    // Insert at the end of the list

    while(1)

    {
        if(feof(fp))

        {

            break;

        }

        fscanf(fp, "%d %s %d \n", &preg, purpose,&amount);

        start = addNode2(start, preg, purpose,amount);

    }
    fclose(fp);

    printf("\nThe list read from file bill-data is...\n");

    display2(start);

    printf("\nYou will be now operating on above list.\n");

    return start;

}

void dump_data2(B * start)

{

    FILE *fp;

    fp = fopen("bill-data.txt", "w");

    if(fp == NULL)

    {

        printf("Unable to open file\n");

        return;

    }

    // Dump the list data back to file

     while(start!=NULL)

    {

        fprintf(fp, "%d %s %d \n", start->preg, start->purpose,start->amount);

        start = start->next;

    }

    fclose(fp);

}

int main()

{

    P *start = NULL;

    D *start1=NULL;

    B *start2=NULL;

    int key;

    int item;

    start = read_from_file(start);

    start1 = read_from_file1(start1);

    start2 = read_from_file2(start2);


    while(1)
    {
        printf("***************************\n");

        printf("select the operation\n");

        printf("0-termination \n");

        printf("1-register the new patient \n");

        printf("2-remove the patient \n");

        printf("3-search the patient details \n");

        printf("4-display the patient list \n");

        printf("5-add new doctor\n");

        printf("6-remove the doctor\n");

        printf("7-search for doctor details \n");

        printf("8-display the doctor list \n");

        printf("9-assign patients to a doctor \n");

        printf("10-deassign patients to a doctor \n");

        printf("11-change patient from inpatient to outpatient or vise-versa\n");

        printf("12-number of in patients and outpatients \n");

        printf("13-make a new bill\n");

        printf("14-to pay individual bill of a patient  \n");

        printf("15-all the bills of a patient and the total amount of all of them \n");

        printf("16-pay total bill of a patient \n");

        printf("17-display the bill list \n");

        scanf("%d",&item);

        switch(item)

        {

            case 0: {

                    dump_data(start);

                    dump_data1(start1);

                    dump_data2(start2);

                    exit(0);

                    }

            case 1: {

                    int preg;

                    char name[30];

                    int type;

                    int dreg;

                    printf("enter patient registration number \n");

                    scanf("%d",&preg);

                    printf("enter the name of the patient ");

                    scanf("%s",name);

                    printf("Enter 1 if inpatient 0 if outpatient \n");

                    scanf("%d",&type);

                    printf("Enter the registration number of doctor assigned to the patient \n");

                    scanf("%d",&dreg);

                    start = addNode(start,preg,name,type,dreg);

                    break;

                    }

            case 2: {

                    printf("enter the patient register number\n");

                    scanf("%d",&key);

                    start= deleteNode(start,key);

                    break;

                    }

            case 3:
                    {

                    printf("enter the patient register number\n");

                    scanf("%d",&key);

                    searchNode(start,key);

                    break;

                    }

            case 4: {

                    display(start);

                    break;

                    }

            case 5: {

                    int dreg;

                    char name[30];

                    printf("enter the registration number\n");

                    scanf("%d",&dreg);

                    printf("enter the doctor name \n");

                    scanf("%s",name);

                    start1=addNode1(start1,dreg,name);

                    break;

                    }

            case 6: {

                    printf("enter the doctor registration number \n");

                    scanf("%d",&key);

                    start1=deleteNode1(start1,key);

                    break;

                    }

            case 7: {

                    printf("enter the doctor register number\n");

                    scanf("%d",&key);

                    searchNode1(start1,key);

                    break;

                    }

            case 8: {

                    display1(start1);

                    break;

                    }

            case 11: {

                    printf("enter the patient id \n");

                    scanf("%d",&key);

                    start=change_patient_status(start,key);

                    break;

                    }

            case 12: {

                    start=count(start);

                    break;

                    }

            case 13:{

                    int preg;

                    char purpose[40];

                    int amount;

                    printf("enter the patient number \n");

                    scanf("%d",&preg);

                    printf("enter the purpose of the bill\n");

                    scanf("%s",purpose);

                    printf("enter the amount \n");

                    scanf("%d",&amount);

                    start2=addNode2(start2,preg,purpose,amount);

                    break;

                    }

            case 14:{

                    int preg;

                    printf("enter patient number to acquire their bill\n");

                    scanf("%d",&preg);

                    int amount;

                    printf("enter the amount\n");

                    scanf("%d",&amount);

                    start2=deleteNode2(start2,preg,amount);

                    break;

                    }

            case 15:{

                    int preg;

                    printf("enter patient number to acquire their bill\n");

                    scanf("%d",&preg);

                    start2=total(start2,preg);

                    break;

                    }

            case 16:{

                    int preg;

                    printf("enter the patient number whose bills had to be paid\n");

                    scanf("%d",&preg);

                    start2=totaldel(start2,preg);

                    break;

                    }

              case 17: {

                    display2(start2);

                    break;

                    }

              default : {

              printf("enter valid input\n");
              }

        }
    }

    return 0;

}
