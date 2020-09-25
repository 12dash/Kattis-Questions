#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[50];
    int temp = scanf("%s",&s);
    int i =0;
    int r = 1;
    while(s[i]!='\0')
    {

        if((s[i]=='A')&&(r!=3))
        {
            r = (r==1)?2:1;
        }
        else if((s[i]=='B')&&(r!=1))
        {
            r = (r==2)?3:2;
        }
        else if((s[i]=='C')&&(r!=2))
        {
            r = (r==3)?1:3;
        }
        i += 1;
    }
    printf("%d",r);
    return 0;
}
