#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,s,i;
        scanf("%d%d",&n,&x);
        s=pow(2,x);
        for(i=1;i<=n;i++)
        s=s/2;
        printf("%d\n",s);
    }
}
