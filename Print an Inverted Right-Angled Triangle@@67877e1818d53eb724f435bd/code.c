#include<stdio.h>
int main()
{
    int i,j,x;
    scanf("%d",&x);
    for (int i =x;i>=1,i--)
    {
        for (int j =1;j<=i,j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}