#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        if(n<=m*36)
        printf("YES\n");
        else
        printf("NO\n");
    }
}
