#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,s;
        scanf("%d%d",&n,&m);
        if(n>m)
        s=n-m;
        else
        s=0;
        printf("%d\n",s);
    }
}
