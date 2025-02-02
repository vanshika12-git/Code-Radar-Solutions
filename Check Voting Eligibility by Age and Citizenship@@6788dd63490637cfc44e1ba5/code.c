#include <stdio.h>
int main ()
{
    int a ,b;
    scanf("%d %d ",&a,&b);
    if(a>=18 && (b==1 ||b == 0))
    {
        printf("%d %d Eligible",a,b);
    }
    else if(a<18 &&( b == 1|| b==0))
    {
        printf("%d %d Not Eligible",a,b);
    }
    else{
        printf("Not Eligible");
    }
    return 0 ;

}