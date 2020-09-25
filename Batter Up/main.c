#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf("%d",&n);
    int i =0;
    double sum = 0;
    int k =0;
    for(i=0;i<n;i++)
    {
        int a= 0;
        scanf("%d",&a);
        if(a>=0){
            sum += a;
            k++;
        }
    }
    sum = sum/k;
    printf("%lf",sum);
    return 0;
}
