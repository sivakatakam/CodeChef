#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,x,p,r;
        scanf("%d%d%d",&n,&m,&x);
        p=2*(n+m);
        r=x*p;
        printf("%d\n",r);
    }
}
