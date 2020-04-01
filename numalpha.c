#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
     int t,n,j,i,d=0,a=0,k=0;
     char s[2];
     scanf("%d",&t);
     for(i=0;i<t;i++)
     {
        d=0;a=0;k=0;
         scanf("%d",&n);
       while(k<n)
       { j=0;
    scanf("%s",s);
    while(s[j]<1)
      {
         if(s[j]>=48&&s[j]<=57)
         {
           d++;
         }
         if(s[j]>=65&&s[j]<=90||s[j]>=97&&s[j]<=122)
         {
           a++;
         }
         j++;
       }
       k++;
       }
       if(d>a)
       {
         printf("NUMBER\n");
       }
       if(a>d)
       {
         printf("ALPHABET\n");
       }
       if(d==a)
       {
           printf("ALPHBET");
       }

     }
return 0;
}
