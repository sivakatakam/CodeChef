#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,x;
        scanf("%d%d",&a,&b);
        if(a>b)
        x=7-a;
        else
        x=7-b;
        printf("%d\n",x);
    }
}
