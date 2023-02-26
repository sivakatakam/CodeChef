#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a,b;
        scanf("%d",&n);
        a=n*50;
        b=(a/100.0)*30;
        printf("%d\n",b);
    }
}
