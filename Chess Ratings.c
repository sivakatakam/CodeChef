#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,a,n;
        scanf("%d%d",&x,&y);
        a=y-x;
        if(a%8==0)
        n=a/8;
        else
        n=(a/8)+1;
        printf("%d\n",n);
    }
}
