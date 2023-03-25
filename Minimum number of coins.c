#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,a;
        scanf("%d",&x);
        a=x/10;
        if(x%10==5)
        a=a+1;
        else if(x%10==0)
        a=a;
        else
        a=-1;
        printf("%d\n",a);
    }
}
