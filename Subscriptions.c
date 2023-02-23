#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,s,a;
        scanf("%d%d",&n,&x);
        if(n%6==0)
        s=n/6;
        else
        s=(n/6)+1;
        a=s*x;
        printf("%d\n",a);
    }
}
