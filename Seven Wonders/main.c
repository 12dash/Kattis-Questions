#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t=0;
    int g =0;
    int c = 0;
    char s[50];
    scanf("%s",&s);
    int i =0;
    while(s[i]!='\0')
    {
        if(s[i]=='T')
            t += 1;
        else if(s[i] == 'C')
            c += 1;
        else
            g += 1;

        i += 1;
    }
    int r = t*t + c*c + g*g;
    int l = 0;
    if(t<=c)
    {
        if(t<=g)
            l = t;
        else
            l = g;
    }
    else{
        if(c<=g)
    {
        l = c;
    }
    else l= g;
    }
    r += l*7;
    printf("%d",r);
    return 0;
}
