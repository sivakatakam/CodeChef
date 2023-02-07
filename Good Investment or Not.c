#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,a;
        scanf("%d%d",&x,&y);
        a=2*y;
        if(a<=x)
        printf("YES\n");
        else
        printf("NO\n");
    }
}
