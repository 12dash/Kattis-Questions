#include <stdio.h>
#include <stdlib.h>

int main()
{

    char str[100];
    int temp = scanf("%s",&str);
    printf("%c",str[0]);
    int i =0;

    while(str[i]!='\0')
    {
        if((str[i] == 45)&&(str[i+1]!='\0'))
        {
            printf("%c",str[i+1]);
        }
        i += 1;
    }

    return 0;
}
