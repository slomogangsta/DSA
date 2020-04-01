#include <stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<windows.h>
void towerOfHanoi(int n,char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        Sleep(1000);
        return;
    }
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod);
    Sleep(1000);
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}

int main()
{
    int n = 3;
    clock_t start,end;
     start=clock();
    towerOfHanoi(n, 'A', 'C', 'B');
     end=clock();
    double t;
    t=(end-start)/CLOCKS_PER_SEC;
    printf("%g",t);
    return 0;
}
