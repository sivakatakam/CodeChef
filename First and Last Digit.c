#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,l,r,s;
        scanf("%d",&n);
        l=n%10;
        while(n!=0)
        {
            r=n%10;
            n=n/10;
        }
        s=r+l;
        printf("%d\n",s);
    }
}
