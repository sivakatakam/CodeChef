#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,x;
        scanf("%d%d%d",&a,&b,&c);
        x=a*b*c;
        printf("%d\n",x);
    }
}
