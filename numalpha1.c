#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
     int t,n,j,i,d=0,a=0;
     scanf("%d",&t);
     for(i=0;i<t;i++)
     {
         n=0;
       scanf("%d",&n);
       char s[2*n];
       *s='\0';
       scanf("%s",s);
     j=0;d=0;a=0;
      while(s[j]!='\0')
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
       if(d>a)
       {
         printf("NUMBER\n");
       }
       if(a>d)
       {
         printf("ALPHABET\n");
       }
   }
return 0;
}
