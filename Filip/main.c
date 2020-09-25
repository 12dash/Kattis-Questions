#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    int temp = scanf("%d%d",&x,&y);
    int r = x;
    int t =0;
    while(r>0)
    {
        t = t*10 + r%10;
        r /= 10;
    }
    x = t;
    r = y;
    t = 0;
    while(r>0)
    {
        t = t*10 + r%10;
        r /= 10;
    }
    y = t;
    t = x>y?x:y;
    printf("%d",t);
    return 0;
}
