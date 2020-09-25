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
        if(a+b==c)
        {
            printf("Possible\n");
        }
        else if(a - b==c)
        {
            printf("Possible\n");
        }
        else if(b - a==c)
        {
            printf("Possible\n");
        }
        else if(a * b==c)
        {
            printf("Possible\n");
        }
        else if(a / b==c)
        {
            printf("Possible\n");
        }else if(b / a==c)
        {
            printf("Possible\n");
        }
        else
        {
            printf("Impossible\n");
        }
    }
    return 0;
}
