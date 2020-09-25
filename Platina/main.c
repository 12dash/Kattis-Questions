#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1;
    int points = 4;
    int n;
    int temp = scanf("%d",&n);
    int i = 1;
    int r = 2;
    while(i<=n)
    {
        r = 2*r -1;
        i += 1;
    }
    points = r*r;
    printf("%d",points);
    return 0;
}
