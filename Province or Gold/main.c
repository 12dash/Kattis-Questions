#include <stdio.h>
#include <stdlib.h>

int main()
{
    int g,c,s;
    scanf("%d %d %d",&g,&s,&c);
    int b = g*3+s*2+c*1;
    if(b>=8)
    {
        printf("Province or Gold");
    }
    else if((b<8)&&(b>=6))
    {
        printf("Duchy or Gold");
    }
    else if((b<6)&&(b>=5))
    {
        printf("Duchy or Silver");
    }
    else if((b<5)&&(b>=3))
    {
        printf("Estate or Silver");
    }
    else if((b<3)&&(b>=2))
    {
        printf("Estate or Copper");
    }
    else if((b<2))
    {
        printf("Copper");
    }
    return 0;
}
