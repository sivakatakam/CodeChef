#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,a;
        scanf("%d%d",&n,&x);
        a=n/(3*x);
        printf("%d\n",a);
    }
}
