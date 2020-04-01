#include<stdio.h>
#include<stdlib.h>
int bin(int n)
{
    if (n==0)
    {
        return 0
    }
    else
    {
        return (n%2+10*bin(n/2))
    }
}
int main()
{
    int n,b;
    scanf("%i",&n);
    b=bin(n);
    printf("%d",b);
    return 0;
}
