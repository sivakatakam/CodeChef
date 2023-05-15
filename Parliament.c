#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x;
        scanf("%d%d",&n,&x);
        if(x>=(n/2.0))
        printf("YES\n");
        else
        printf("NO\n");
    }
}
