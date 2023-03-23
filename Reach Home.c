#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        if(n*5<m)
        printf("NO\n");
        else
        printf("YES\n");
    }
}
