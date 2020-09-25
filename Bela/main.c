#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    int n;
    int temp = scanf("%d %c",&n,&a);
    int i =0;
    char x,y;
    int sum=0;
    for(;i<4*n;i++)
    {

        temp = scanf(" %c%c",&x,&y);
        if(x=='A')
        {
            sum += 11;
        }
        else if(x=='K')
        {
            sum += 4;
        }
        else if(x=='Q'){
            sum += 3;
        }
        else if(x=='T'){
            sum += 10;
        }
        else if(x == 'J'){
            if(y==a)
            {
                sum += 20;
            }
            else
                sum += 2;
        }
        else if(x == '9'){
            if(y==a)
            {
                sum += 14;
            }

        }

    }
    printf("%d",sum);

    return 0;
}
