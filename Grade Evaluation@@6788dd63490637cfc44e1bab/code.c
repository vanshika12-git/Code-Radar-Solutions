#include <stdio.h>
int main()
{
    char a,b,c,d,e;
    scanf("%c %c %c %c %c",&a,&b,&c,&d,&e);
    if (a=='A')
    {
        printf("Excellent");
    }
    else if(b=='B')
    {
        printf("Good");
    }
    else if (c=='C')
    {
        printf("Average");
    }
    else if(d=='D')
    {
        printf("Below Average");
    }
    else if(e=='E')
    {
        printf("Fail");
    }
    else 
    {
        printf("Invalid grade");
    }
    return 0;
}