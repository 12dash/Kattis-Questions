#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n =0;
    scanf("%d",&n);
    int i =0;
    int sum = 0;
    for(i=0;i<n;i++)
    {
        int a = 0;
        scanf("%d",&a);
        sum += pow(a/10,a%10);
    }
    printf("%d",sum);
    return 0;
}
