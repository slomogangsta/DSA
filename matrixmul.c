#include <stdio.h>
#include<stdio.h>
#include<stdlib.h>
#define size 500
#define its 100
#include<math.h>
#include<time.h>
void multiply(int mat1[size][size], int mat2[size][size], int res[size][size])
{
    int i, j, k;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            res[i][j] = 0;
            for (k = 0; k < size; k++)
                res[i][j] += mat1[i][k]*mat2[k][j];
        }
    }
}
int main()
{
     clock_t start,end;
 int res[size][size],mat1[size][size],mat2[size][size],c,d,l;
for (c = 0; c < size; c++)
    for (d = 0; d < size; d++)
      mat1[c][d]=rand()%1000;

for (c = 0; c < size; c++)
    for (d = 0; d < size; d++)
       mat2[c][d]=rand()%1000;

       start=clock();
for(l=0;l<its;l++)
{
  multiply(mat1, mat2, res);
}

    end=clock();
    double t;
    t=(end-start)/CLOCKS_PER_SEC;
    printf("%g",t/its);
return 0;
}

