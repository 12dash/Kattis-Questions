#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1=0;int y1 = 0;
    int x2=0;int y2 = 0;
    int x3=0;int y3 = 0;
    int x4=0;int y4 = 0;

    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    scanf("%d %d",&x3,&y3);

    if((x1!=x2)&&(x1!=x3))
    {
        x4 = x1;
    }
    if((x2!=x1)&&(x2!=x3))
    {
        x4 = x2;
    }
    if((x3!=x1)&&(x3!=x2))
    {
        x4 = x3;
    }
    if((y1!=y2)&&(y1!=y3))
    {
        y4 = y1;
    }
    if((y2!=y1)&&(y2!=y3))
    {
        y4 = y2;
    }
    if((y3!=y1)&&(y3!=y2))
    {
        y4 = y3;
    }

    printf("%d %d",x4,y4);

    return 0;
}
