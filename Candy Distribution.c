#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,a;
        scanf("%d%d",&n,&m);
        if(n%m==0)
        {
            a=n/m;
            if(a%2==0)
            printf("Yes\n");
            else
            printf("No\n");
        }
        else
        printf("No\n");
    }
}
