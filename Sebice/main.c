#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 0;
    int w = 0;
    int h =0;
    int t = scanf("%d%d%d",&n,&w,&h);
    int i =0;
    int k =0;
    int m = sqrt(w*w + h*h);
    for(i=0;i<n;i++)
    {
        t= scanf("\n%d",&k);

        if(k<=m){
        printf("DA\n");}
    else{
        printf("NE\n");}

    }
    return 0;
}
