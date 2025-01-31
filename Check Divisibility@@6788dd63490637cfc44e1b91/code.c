#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if (b !=0)
    {
        if(a%b==0){
            printf("Divisible");
        }
        else
        {
            printf("Not Divisible");
        }
    }
    else
    {
        printf("Not Divisible");
    }
    return 0;
}