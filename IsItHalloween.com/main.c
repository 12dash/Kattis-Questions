#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[6];
    gets(a);
    if((strcmp(a,"OCT 31") == 0)||(strcmp(a,"DEC 25")==0))
    {
        printf("yup");
    }
    else
    {
        printf("nope");
    }
    return 0;
}
