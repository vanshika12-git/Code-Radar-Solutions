#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if((a%4==0 && a%100  !=0) || (a%4==0))
    {
        printf("Leap Year %d",a);
    }
    else
    {
        printf("Not a Leap Year %d",a);
    }
    return 0;

}