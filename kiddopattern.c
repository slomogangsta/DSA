#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
