#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,m;
    int temp = scanf("%d%d",&n,&m);
    int h = (n>m)?n:m;
    int l = (n+m)-h;
    h += 1;
    l += 1;
    for(;l<=h;l++)
    {
        printf("%d\n",l);
    }
    return 0;
}
