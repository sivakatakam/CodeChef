#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,a;
        scanf("%d%d",&x,&y);
        a=x*10+y*5;
        printf("%d\n",a);
    }
}
