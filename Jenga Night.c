#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x;
        scanf("%d%d",&n,&x);
        if(n==x||n<x&&x%n==0)
        printf("YES\n");
        else
        printf("NO\n");
    }
}
