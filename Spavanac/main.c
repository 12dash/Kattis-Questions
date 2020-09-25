#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int temp = scanf("%d%d",&a,&b);
    int x,y;
    if(b>=45)
    {
        x = a;
        y = b-45;
    }
    else
    {
        if(a==0)
        {
            x = 23;
        }
        else
            x = a-1;
        y = 60-(45-b);
    }
    printf("%d %d",x,y);
    return 0;
}
