#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    int b =0;
    scanf("%d %d",&a,&b);
    int i =1;
    int sum = 0;
    while(i<b){
        switch(i)
        {
        case 1:
            sum += 31;
            break;
        case 2:
            sum += 28;
            break;
        case 3:
            sum += 31;
            break;
        case 4:
            sum += 30;
            break;
        case 5:
            sum += 31;
            break;
        case 6:
            sum += 30;
            break;
        case 7:
            sum += 31;
            break;
        case 8:
            sum += 31;
            break;
        case 9:
            sum += 30;
            break;
        case 10:
            sum += 31;
            break;
        case 11:
            sum += 30;
            break;
        }
        i++;
    }
        sum += a;
        sum = sum%7;
        switch(sum)
        {
        case 1:
            printf("Thursday");
            break;
        case 2:
             printf("Friday");
            break;
        case 3:
             printf("Saturday");
            break;
        case 4:
             printf("Sunday");
            break;
        case 5:
             printf("Monday");
            break;
        case 6:
             printf("Tuesday");
            break;
        case 0:
             printf("Wednesday");
            break;
        }


    return 0;
}
