#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (!(a>0))
    {
        printf("True",a);
    }
    else if(a==0)
    {
        printf("True");
    }
    else
    {
        printf("False",a);
    }
    return 0;
}