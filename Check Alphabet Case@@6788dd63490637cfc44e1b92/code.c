#include <stdio.h>
int main()
{
    char a;
    scanf("%d",&a);
    if (isupper(a))
    {
        printf("Uppercase");
    }
    else if(islower(a))
    {
        printf("Lowercase");
    }
    else
    {
        printf("vanshu");
    }
    return 0 ;
}