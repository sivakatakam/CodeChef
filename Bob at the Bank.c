#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int w,x,y,z,t;
        scanf("%d%d%d%d",&w,&x,&y,&z);
        t=w+(z*x)-(z*y);
        printf("%d\n",t);
    }
}
