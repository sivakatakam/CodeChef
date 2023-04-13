#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(2*y<=x*15)
        printf("YES\n");
        else
        printf("NO\n");
    }
}
