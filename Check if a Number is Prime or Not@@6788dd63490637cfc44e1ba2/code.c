#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a==2){
        printf("%d Prime",a);
    }
    else if(a%2==0){
        printf("%d Non Prime",a);
    }
    else 
    {
        if(a%3==0){
            printf("%d Non Prime",a);
        }
        else if(a%5==0){
            printf("%d Non Prime",a);
        }
        else if(a%7==0){
            printf("%d Non Prime",a);
        }
        else if(a%11==0){
            printf("%d Non Prime",a);
        }
        else{
            printf("%d Prime",a);
        }
    }
    return 0;
}