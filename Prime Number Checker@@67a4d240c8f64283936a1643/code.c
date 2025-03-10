#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num;
        scanf("%D",&num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}