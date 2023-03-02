#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,y;
        scanf("%d%d%d",&n,&x,&y);
        if(y==n*x||y<n*x&&y%x==0)
        printf("YES\n");
        else
        printf("NO\n");
    }
}
