#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    int y =0;
    int n =0;
    int i = 1;
    int f = 0;
    scanf("%d %d %d",&x,&y,&n);
    for(i=1;i<=n;i++)
    {
        f = 0;
        if(i%x==0)
        {
            printf("Fizz");
            f = 1;
        }
        if(i%y==0)
        {
            printf("Buzz");
            f = 1;
        }
        else if(f==0)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
