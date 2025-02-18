#include<stdio.h>
int main()
{
    int a,s=0,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        s +=i;
        printf("%d\n",a,s);
    }
    return 0;
}