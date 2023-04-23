#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a,b,i,s=1,c;
        scanf("%d%d%d",&n,&a,&b);
        for(i=0;s!=n;i++)
        s=s*2;
        c=(i)*a+(i-1)*b;
        printf("%d\n",c);
    }
}
