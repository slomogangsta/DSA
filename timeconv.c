#include <stdio.h> 
#include <string.h>

int main()
{   

    int hh, mm, ss ;
    char s[3];
    scanf("%d:%d:%d%s", &hh, &mm, &ss, s) ;
        
    if (strcmp(s,"PM")==0 && hh!=12) 
    {
        hh += 12 ;
    }
    
    if (strcmp(s,"AM")==0 && hh==12) 
    {
        hh = 0 ;
    }
        
    printf("%02d:%02d:%02d", hh, mm, ss) ;
    return 0;
    
}