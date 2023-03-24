#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,m,a,s;
        scanf("%d%d%d",&n,&k,&m);
        a=k*m;
        if(n%a==0)
        s=n/a;
        else
        s=1+(n/a);
        printf("%d\n",s);
    }
}
