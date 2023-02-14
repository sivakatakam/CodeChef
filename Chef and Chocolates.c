#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,z,c,r;
        scanf("%d%d%d",&x,&y,&z);
        r=x*5+y*10;
        c=r/z;
        printf("%d\n",c);
    }
}
