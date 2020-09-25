#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i;
    int temp = scanf("%d%d",&a,&i);
    float b = (i-1)+.01;
    b = (a*b)+1;
    i = b;
    printf("%d",i);
    return 0;
}
