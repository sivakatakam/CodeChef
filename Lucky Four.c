#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,c=0,r;
        scanf("%d",&n);
        while(n!=0)
        {
            r=n%10;
            n=n/10;
            if(r==4)
            c++;
        }
        printf("%d\n",c);
    }
}
