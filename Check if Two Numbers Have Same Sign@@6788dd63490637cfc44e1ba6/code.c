#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>0 &&b>0)
    {
        printf("Same Sign");
    }
    else if(a<0&&b<0)
    {
        printf("Same Sign");
    }
    else if (a>0 && b<0)
    {
        printf("Different Sign");
    }
    else if(a<0 && b>0)
    {
        printf("Different Sign");
    }
    else{
        printf("Differnet Sign");
    }
    return 0;
}