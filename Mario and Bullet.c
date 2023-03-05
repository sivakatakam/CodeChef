#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,z,n,a;
        scanf("%d%d%d",&x,&y,&z);
        n=y/x;
        if(n>z)
        a=0;
        else
        a=z-n;
        printf("%d\n",a);
    }
}
