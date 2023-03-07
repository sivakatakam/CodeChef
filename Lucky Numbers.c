#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,r,c=0;
        scanf("%d",&n);
        while(n!=0)
        {
            r=n%10;
            n=n/10;
            if(r==7)
            c=1;
        }
        if(c==1)
        printf("YES\n");
        else
        printf("NO\n");
    }
}
