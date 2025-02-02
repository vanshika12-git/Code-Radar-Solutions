#include <stdio.h>
int main()
{
    float a,b;
    scanf("%f %f",&a,&b);
    if (a * a == b)
    {
        printf("%f Yes",a,b);
    }
    else
    {
        printf("No");
    }
    return 0;
}