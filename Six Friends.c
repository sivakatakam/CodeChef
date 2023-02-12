#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,a;
        scanf("%d%d",&x,&y);
        if(3*x>2*y)
        a=2*y;
        else
        a=3*x;
        printf("%d\n",a);
    }
}
