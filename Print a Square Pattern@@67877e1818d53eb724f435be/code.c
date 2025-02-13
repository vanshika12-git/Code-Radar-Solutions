include<stdio.h>
int main()
{
    int i,j,x;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
        {
            printf("* ");
        }
        printf("\n")
    }
    return 0;

}