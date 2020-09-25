#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n =0;
    int i =0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char a[50];
        char b[50];
        scanf("%s",a);
        scanf("%s",b);
        int k =0;
        printf("%s\n",a);
        printf("%s\n",b);
        while(a[k]!='\0')
        {
            if(a[k]==b[k])
            {
                printf(".");
            }
            else
                printf("*");
            k = k+1;
        }
        printf("\n\n");
    }
    return 0;
}
