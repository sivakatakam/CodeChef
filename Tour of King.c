#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,a;
        scanf("%d%d",&n,&m);
        a=5*n+m*7;
        printf("%d\n",a);
    }
}
