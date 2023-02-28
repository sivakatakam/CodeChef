#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,a;
        scanf("%d",&x);
        if(x%25==0)
        a=x/25;
        else
        a=(x/25)+1;
        printf("%d\n",a);
    }
}
