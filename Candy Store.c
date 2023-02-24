#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,a,m;
        scanf("%d%d",&x,&y);
        if(y>x)
        a=y-x;
        else
        a=0;
        m=y+a;
        printf("%d\n",m);
    }
}
