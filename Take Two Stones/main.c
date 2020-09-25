#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n =0;
    int temp = scanf("%d",&n);
    n = n%10;
    if(n%2==0)
    {
        printf("Bob");
    }
    else
        printf("Alice");
    return 0;
}
