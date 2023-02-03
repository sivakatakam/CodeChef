#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int w,d,a;
        scanf("%d%d",&w,&d);
        a=w*7-d;
        printf("%d\n",a);
    }
}
