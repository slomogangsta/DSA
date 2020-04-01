#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

    char s[] = "dsalab";
    char *p;
    char *q;
    char t[10];
    q=t;
    p=s;
    int length=0;
    while(*p!='\0')
          {
              length++;
                p++;
          }
    printf("length of string s %d\n",length);
    p=s;//bcz while handling p for length we have already reached
    while(*p!='\0')
    {
        *q=*p;
        p++;
        q++;
    }
    *q='\0';
    printf("copied string is %s\n",t);
    return 0;
}
