#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
printf("enter the number of sticks");
scanf("%i",&n);
if(n%2==0)
{
    for(i=0;i<=n/2;i++)
    {
        printf("1");
    }
}
else
{
    n=n-3;
        printf("7");
        for(i=0;i<=n/2;i++)
        {
            printf("1");
        }

}
return 0;
}
