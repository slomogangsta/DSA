#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int n,i,a[200],j;
scanf("%d",&n);
if(n>=1&&n<=200)
{
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
    if(a[j]>=18)
    {

        printf("Eligible\n");
    }
     else
    {

        printf("Not Eligible\n");
    }
}
}
    return 0;
}
