#include<stdio.h>
int main()
{
    int n,a,b,u,r;
    scanf("%d%d%d",&n,&a,&b);
    u=n-a;
    r=n-(a+b);
    printf("%d %d",u,r);
}
