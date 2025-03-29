#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    int ranked[200000];
    for(int i=0;i<n;i++)
    scanf("%d",&ranked);

    scanf("%d",&m);
    int player[200000];
    for(int i=0;i<m;i++)
    scanf("%d",&player[i]);

    trackplayerranks(ranked,n,player,m,result);
    for(int i=0;i<m;i++)
    printf("%d\n",result[i]);
    return 0 ;
}