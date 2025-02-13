#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if(i==1 || i ==n){
            for(j=1;j<=n;j++)
            {
                printf("*");
            }
        }
        else
        {
            printf("*  ");
            printf("*");
        }
        printf("\n");
    }
    return 0;
}