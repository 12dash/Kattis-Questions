#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf("%d",&n);
    int i =0;
    for(i=0;i<n;i++)
    {
        int a = 0;
        scanf("%d",&a);
        if(a%2==0)
            printf("%d is even\n",a);
        else
            printf("%d is odd\n",a);
    }
    return 0;
}
