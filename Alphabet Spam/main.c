#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100000];
    scanf("%s",a);

    float w =  0;
    float l = 0;
    float u =0 ;
    float s = 0;
    int i =0;
    while(a[i]!='\0')
    {
        if((a[i]<='Z')&&(a[i]>='A'))
        {
            u += 1;
        }
        else if((a[i]<='z')&&(a[i]>='a'))
        {
            l += 1;
        }
        else if((a[i]=='_'))
        {
            w += 1;
        }
        else
            s++;
        i++;

    }
    printf("%f\n",(w/i));
    printf("%f\n",(l/i));
    printf("%f\n",(u/i));
    printf("%f\n",(s/i));
    return 0;
}
