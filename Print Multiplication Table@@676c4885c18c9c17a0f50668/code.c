#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for (i=1;i<=10;i++)
    {
        printf("2 x %d = %d\n",i,n*i);
        printf("5 x %d = %d\n",i,n*i);
        printf("1 x %d = %d\n",i,n*i);
        printf("10 x %d = %d\n",i,n*i);
        printf("0 x %d = %d\n",i,n*i);
        printf("-2 x %d = %d\n",i,n*i);
        printf("3 x %d = %d\n",i,n*i);
    }
    return 0;
}