#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,a,k;
        scanf("%d%d%d",&n,&x,&k);
        a=k/x;
        if(a<=n)
        printf("%d\n",a);
        else
        printf("%d\n",n);
    }
}
