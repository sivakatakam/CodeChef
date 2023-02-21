#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,a;
        scanf("%d%d",&x,&y);
        a=(x*107)/100;
        if(y<=a)
        printf("YES\n");
        else
        printf("NO\n");
    }
}
