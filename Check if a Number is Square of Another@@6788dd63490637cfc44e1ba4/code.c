#include <stdio.h>
int main()
{
    float a,b;
    scanf("%f %f",&a,&b);
    if (a * a == b)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}