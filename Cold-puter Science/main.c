#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n = 0;
   int i =0;
  int s= 0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
        int a = 0;
       scanf("%d",&a);
       if(a<0)
       {
           s++;
       }
   }
   printf("%d",s);
    return 0;
}
