#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l =0;
    int x = 0;
    scanf("%d %d",&l,&x);
    printf("%d",x);
    int i =0;
    char a[5];
    int t = 0;
    int r = 0;
    for(i=0;i<x;i++)
    {
        scanf("\n%s",a);
        printf("%s",a);
        if(strcmp(a,"enter")==0)
        {
            int q  = 0;
            scanf("%d",&q);
            printf("%d",q);
            if((t+q)>l)
            {
                r++;
            }
            else{
                t += q;
            }
        }
        else{
                int q  = 0;
            scanf("%d",&q);
            t -= q;

        }

    }
    printf("%d",r);
    return 0;
}
