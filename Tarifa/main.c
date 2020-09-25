#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,p;
    int temp = scanf("%d",&x);
    temp = scanf("%d",&n);
    int i =0;
    int s = 0;
    for(i;i<n;i++)
    {
        temp = scanf("%d",&p);
        s += (x-p);
    }
    s += x;
    printf("%d",s);
    return 0;
}
