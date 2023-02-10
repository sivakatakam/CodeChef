#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,a;
        scanf("%d%d",&n,&k);
        a=n-k;
        printf("%d\n",a);
    }
}
