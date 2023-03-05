#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,a;
        scanf("%d%d",&n,&m);
        if(m>=n)
        a=n;
        else
        a=2*n-m;
        printf("%d\n",a);
    }
}
