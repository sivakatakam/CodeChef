#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,a;
        scanf("%d%d",&n,&x);
        if(n-x>0)
        a=n-x;
        else
        a=0;
        printf("%d\n",a);
    }
}
