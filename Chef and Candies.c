#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,r,a;
        scanf("%d%d",&n,&x);
        if(n>x)
        {
            r=n-x;
            if(r%4==0)
            a=r/4;
            else
            a=(r/4)+1;
            printf("%d\n",a);
        }
        else
        printf("0\n");
    }
}
