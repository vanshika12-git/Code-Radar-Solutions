#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if (x>=90){
        printf("A");
    }
    else if(x>=80 && x<90){
        printf("B");
    }
    else if(x>=70 && x<80){
        printf("C");
    }
    else if(x>=60&&x<70)
    {printf("D");}
    else if(x<60){
        printf("F");
    }
    else{
        printf("inakid");
    }
    return 0;
}