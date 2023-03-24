#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(a+b<11||a+b>=21)
        printf("-1\n");
        else
        printf("%d\n",21-(a+b));
    }
}
