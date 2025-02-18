#include <stdio.h>
int main()
{
    int d;
    scanf("%d",&d);
    if(d==1||d==3||d==5||d==7||d==8||d==10||d==12)
    {
        printf("31");
    }
    else if(d==4||d==6||d==9||d==11)
    {
        printf("30");
    }
    else if (d==2)
    {
        printf("28");
    }
    else{
        printf("Invalid month");
    }
    return 0;
}
