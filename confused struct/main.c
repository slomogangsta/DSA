#include <stdio.h>
#include <stdlib.h>

struct confused
{
int a;
};
struct more_confused
{
struct confused b;
char a;
};
struct still_confused
{
struct more_confused b;
float a;
};
struct lot_confused
{
struct still_confused b;
double a;
};
struct lot_confused lc;

int main()
{
    printf("input value for the a in lot confused strut %i \n");
    scanf("%lf",&lc.a);
    printf("input value for the a in still confused strut \n");
    scanf("%f",&lc.b.a);
    printf("input value for the a in more confused strut \n");
    scanf("%c",&lc.b.b.a);
    printf("input value for the a in confused strut \n");
    scanf("%i",&lc.b.b.b.a);
    printf("value of the a in lot confused strut is = %lf \n", lc.a);
    printf("value of the a in still confused strut is = %f \n", lc.b.a);
    printf("value of the a in lot confused strut is = %c \n", lc.b.b.a);
    printf("value of the a in lot confused strut is = %i \n", lc.b.b.b.a);
    return 0;

}
