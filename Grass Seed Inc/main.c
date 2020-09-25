#include <stdio.h>
#include <stdlib.h>

int main()
{
    double c = 0;
    int n = 0;
    scanf("%lf",&c);
    scanf("%d",&n);
    int i =0;double sum =0;

    for(i=0;i<n;i++)
    {
        float a = 0;
        float b =0;
        scanf("%f %f",&a,&b);
        sum += (a*b);

    }
    sum = sum*c;
    printf("%.7f",sum);
    return 0;
}
