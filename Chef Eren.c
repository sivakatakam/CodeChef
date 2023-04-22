#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a,b,s=0;
        scanf("%d%d%d",&n,&a,&b);
        for(int i=1;i<=n;i++)
        {
            if(i%2==1)
            s=s+b;
            else
            s=s+a;
        }
        printf("%d\n",s);
    }
}
