#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf("%d",&n);
    int i = 0;
    for(i=0;i<n;i++)
    {
        float a=0;
        float b =0;
        float c = 0;
        scanf("%f",&a);
        scanf("%f",&b);
        scanf("%f",&c);
        float max = b-c -a;
        if(max == 0)
        {
            printf("does not matter\n");
        }
        else if(max > 0)
        {
            printf("advertise\n");
        }
        else{
            printf("do not advertise\n");
        }
    }
    return 0;
}
