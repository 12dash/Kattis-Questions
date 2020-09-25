#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf("%d",&n);
    int i =0;
    float t[10000];
    float v[10000];
    float sum =0 ;
    for(i=0;i<n;i++)
    {
        scanf("%f%f",&t[i],&v[i]);

    }
    i = 0;
    for(i=0;i<n-1;i++)
    {
        float k = 0;
        k =(1.0/2)*(v[i]+v[i+1])*(t[i+1]-t[i]);
        sum += k;

    }
    sum = 0.001*sum;

    printf("%f",sum);
    return 0;
}
