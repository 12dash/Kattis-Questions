#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n =0;
    scanf("%d",&n);
    int i =0;
    for(i=0;i<n;i++)
    {
        int b=0;
        float p=0;
        scanf("%d %f",&b,&p);
        float r = 60.0/p;
        float m = 60*b/p;
        printf("%.4f %.4f %.4f\n",(m-r),m,(m+r));
    }
    return 0;
}
