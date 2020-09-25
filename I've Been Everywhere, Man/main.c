#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n =0;
    scanf("%d",&n);
    int iter = 0;
    for(iter=0;iter<n;iter++)
    {
        int t = 0;
        scanf("%d",&t);
        int i =0;
        char a[100][20];
        int m = 0;
        char b[20];
        for(i=0;i<t;i++)
        {
            scanf("%s",b);
            if(m==0)
            {
                strcpy(a[m++],b);
            }
            else{
                int j =0;
                int flag = 0;
                for(j=0;j<m;j++)
                {
                    if(strcmp(a[j],b)==0)
                    {
                       flag = 1;
                    }
                }
                if(flag == 0)
                {
                    strcpy(a[m++],b);
                }
            }
        }
        printf("%d\n",m);
        //printf("%s\n",a[0]);
    }
    return 0;
}
