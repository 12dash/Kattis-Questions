#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[30];
    gets(a);
    int i =0;
   // int flag = 0;
    while(a[i]!='\0')
    {

        if(a[i]=='s')
        {
            if(a[i+1]=='s')
            {
                printf("hiss");
                return 0;
            }
        }
        i++;
    }

        printf("no hiss");
    return 0;
}
