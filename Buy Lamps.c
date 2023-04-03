#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,x,y,m;
        scanf("%d%d%d%d",&n,&k,&x,&y);
        m=k*x;
        if(x<y)
        m=m+(n-k)*x;
        else
        m=m+(n-k)*y;
        printf("%d\n",m);
    }
}
