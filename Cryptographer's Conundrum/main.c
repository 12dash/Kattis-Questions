#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[300];
    scanf("%s",a);
    int l = strlen(a);
    int i = 0;
    int m = 0;
    while(a[i]!='\0')
    {
        if((i+1)%3==1)
        {
            if(a[i]=='P')
            {
                m++;
            }
        }
        if((i+1)%3==2)
        {
            if(a[i]=='E')
            {
                m++;
            }
        }
        if((i+1)%3==0)
        {
            if(a[i]=='R')
            {
                m++;
            }
        }
        i++;
    }
    printf("%d",(l-m));
    return 0;
}
