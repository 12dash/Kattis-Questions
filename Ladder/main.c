#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int h =0;
    int v = 0;
    scanf("%d %d",&h,&v);
    int l= ceil(h/(sin(v*3.14159265358979323846/180)));
    printf("%d",l);
    return 0;
}
