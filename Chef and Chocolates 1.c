#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int c,x,a,y;
        scanf("%d%d%d",&c,&x,&y);
        a=(c-x)*y;
        printf("%d\n",a);
    }
}
