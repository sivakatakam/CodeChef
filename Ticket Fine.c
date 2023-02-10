#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,p,q,a,r;
        scanf("%d%d%d",&x,&p,&q);
        a=p-q;
        r=a*x;
        printf("%d\n",r);
    }
}
