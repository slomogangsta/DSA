#include "search.c"
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
struct priority
{
    int priority;
    char search_feed[150];

};
typedef struct priority P;
P priority[300];
int main()
{
    char value[30];
    int flag=0,i,j,intr=1,k,l;
    welcome();
    load_from_file();
       printf("Hey there user!!\n");
    printf("what do you want to know about?\n");
    scanf("%s",value);

    for(i=0;value[i]!='\0';i++)
    {
          if(isalpha(value[i])==0)
    {
        printf("invalid data\n");
        flag=0;
        while(flag!=1)
        {
            printf("enter valid data \n");
            scanf("%s",value);
            for(j=0;value[j]!='\0';j++)
            {
              if(isalpha(value[j])!=0)
               {
                   flag=1;
               }
               else
               {
                   flag=0;
               }
            }

        }
    }
    }
    printf("you asked for %s\n",value);
    printf("the results are \n");
    printf("the global count is %d\n",global_count);
    for(k=0;k<=global_count;k++)
    {
        strlwr(search_list[k].search_feed);
    }
for(k=0;k<=global_count;k++)
{
 char *p1, *p2, *p3;
  flag=0;

  p1 = search_list[k].search_feed;
  p2 = value;

  for(i = 0; i<strlen(search_list[k].search_feed); i++)
  {
    if(*p1 == *p2)
      {
          p3 = p1;
          for(j = 0;j<strlen(value);j++)
          {
            if(*p3 == *p2)
            {
              p3++;p2++;
            }
            else
              break;
          }
          p2 = value;
          if(j == strlen(value))
          {
            printf("%s\n",search_list[k].search_feed);
          }
      }
    p1++;
  }
}

    printf("enter 0 to exit and 1 to continue \n");
return 0;
}
