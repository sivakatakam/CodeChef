#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,x;
        scanf("%d%d%d%d",&a,&b,&c,&x);
        if(a+b>=x||b+c>=x||c+a>=x)
        printf("Yes\n");
        else
        printf("No\n");
    }
}
