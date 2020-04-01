#include<stdio.h>
struct confused
{
int a=1;
};
struct more_confused {
struct confused b;
char a=2;
};
struct still_confused {
struct more_confused b;
float a=3;
};
struct lot_confused {
struct still_confused b;
double a=4;
};
struct lot_confused lc;
int main()
{


}
