#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf("%d",&n);
    int sum1 = 0;
    while(n!=0)
    {

        int k = n;
        sum1= 0;
        while(k>0)
            {
                sum1 +=  k%10;
                k = k/10;

            }
            //printf("%d\n",sum1);

        int i =11;
        while(1)
        {
            int r = n*i;
            int sum = 0;
            while(r>0)
            {
                sum += r%10;
                r = r/10;
            }
            if(sum1 == sum)
            {
                printf("%d\n",i);
                break;
            }
            i++;
        }
        scanf("%d",&n);
    }
    return 0;
}
