#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,a,b;
        scanf("%d%d",&x,&y);
        a=x*y;
        b=a/100;
        printf("%d\n",b);
    }
}
