#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int s,p,b,per,t;
        scanf("%d%d",&s,&p);
        b=s-p;
        per=(s*10)/100;
        t=s+per-b;
        printf("%d\n",t);
    }
}
