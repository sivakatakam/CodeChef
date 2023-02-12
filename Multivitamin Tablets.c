#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(y>=x*3)
        printf("YES\n");
        else
        printf("NO\n");
    }
}
