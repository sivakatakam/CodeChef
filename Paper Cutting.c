#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,s;
        scanf("%d%d",&n,&k);
        s=n/k;
        printf("%d\n",s*s);
    }
}
