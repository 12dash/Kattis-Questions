#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    int temp = scanf("%d",&a);

    while(a!=-1)
    {
        int i =0;
        int s = 0;
        int d = 0;
        for(;i<a;i++)
        {
            int b,c;
            temp = scanf("%d%d",&b,&c);
            s += b*(c-d);
            d = c;

        }
        printf("%d miles\n",s);
        temp = scanf("%d",&a);
    }
    return 0;
}
