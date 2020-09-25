#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[14];
    char b[5];
    int i =1;
    gets(a);

    b[0] = a[0];
    b[1] = a[3];
    b[2] = a[6];
    b[3] = a[9];
    b[4] = a[12];
    int j = 1;
    int k =0;
    int max = 1;
    int r = 1;
    for(k=0;k<5;k++)
    {
        r = 1;
        for(j = k+1;j<5;j++)
        {
            if(b[k]== b[j])
            {
                r++;
            }
        }
        if(max<r)
        {
            max = r;
        }
    }
    printf("%d",max);
    return 0;
}
