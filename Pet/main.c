#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0 ;
     int j = 1;
     int i = 1;

    for(i= 1;i<=5;i++)
    {
        int k = 0;
        int t = 0;
        for(k=0;k<4;k++)
        {
            int a = 0;
            scanf("%d",&a);
            t += a;
        }
        if(t>sum)
        {
            sum = t;
            j = i;
        }
    }
    printf("%d %d",j, sum);

    return 0;
}
