#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,a;
        scanf("%d",&x);
        a=x%10;
        printf("%d\n",a);
    }
}
