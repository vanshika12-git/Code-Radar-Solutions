#include <stdio.h>
int main()
{
    int a , b;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("True");
    }
    else if((a>0)&&(b<0))
    {
        printf("False");
    }
    else if((a<0) && (b>0))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}