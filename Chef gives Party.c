#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,k;
        scanf("%d%d%d",&n,&x,&k);
        if(n*x<=k)
        printf("YES\n");
        else
        printf("NO\n");
    }
}
