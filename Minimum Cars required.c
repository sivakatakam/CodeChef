#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a;
        scanf("%d",&n);
        if(n%4==0)
        a=n/4;
        else
        a=(n/4)+1;
        printf("%d\n",a);
    }
}
