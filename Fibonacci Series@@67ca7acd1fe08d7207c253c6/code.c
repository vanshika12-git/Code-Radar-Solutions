#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n<=0)
    {
        printf("Invalid input");
        return 0;
    }
    int a=0,b=0,next;
    if(n>=1)
    {
        printf("0");
    }
    if(n>=2)
    {
        printf("1 ");
    }
    for(int i=3;i<=n;i++)
    {
        next=a+b;
        printf("%d",next);
        a=b;
        b=next;
    }
    printf("\n");
    return 0;
}