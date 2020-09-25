#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf("%d",&n);
    int i =0;
    for(i=0;i<n;i++)
    {
        int a =0;
        int k =1;
        scanf("%d",&a);
        int b=1;
        for(k=1;k<=a;k++)
        {
            b = b*k;
            b =b%10;
        }
        printf("%d\n",b);
    }
    return 0;
}
