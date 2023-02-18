#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,r,s=0;
        scanf("%d",&n);
        while(n!=0)
        {
            r=n%10;
            n=n/10;
            s=s+r;
        }
        printf("%d\n",s);
    }
}
