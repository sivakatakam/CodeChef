#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int y;
        float x,a;
        scanf("%f%d",&x,&y);
        a=(y/x)*100;
        if(a>=50)
        printf("YES\n");
        else
        printf("NO\n");
    }
}
