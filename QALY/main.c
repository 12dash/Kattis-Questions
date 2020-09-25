#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    float r = 0;
    float s = 0;
    float sum = 0;
    int i =0;
    int temp = scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        temp = scanf("%f %f",&r,&s);
        sum += r*s;
    }
    printf("%.3f",sum);
    return 0;
}
