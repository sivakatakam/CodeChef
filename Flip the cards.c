#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,a;
        scanf("%d%d",&n,&x);
        if(x<=n/2)
        a=x;
        else if(n==x)
        a=0;
        else if(x>n/2)
        a=n-x;
        printf("%d\n",a);
    }
}
