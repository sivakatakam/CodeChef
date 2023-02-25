#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,a,p;
        scanf("%d%d",&n,&x);
        a=n*x;
        if(a%4==0)
        p=a/4;
        else
        p=(a/4)+1;
        printf("%d\n",p);
    }
}
