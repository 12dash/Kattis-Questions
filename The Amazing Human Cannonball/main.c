#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float v = 0;
    float t = 0;
    float x = 0;
    float h1 = 0;
    float h2 = 0;
    float i =  0;
    int n =0 ;
    scanf("%d",&n);

    for(;i<n;i++)
    {
        scanf("%f%f%f%f%f",&v,&t,&x,&h1,&h2);
        //printf("%f",cos((3.14152657*t)/180));
        double time = x/(cos((t*3.14152657)/180)*v);
        double y = v*time*sin((t*3.14152657)/180)-0.5*9.81*(time*time);
        if(((y+1)<h2)&&((y-1)>h1))
        {
            printf("Safe\n");
        }
        else
            printf("Not Safe\n");

    }
    return 0;
}
