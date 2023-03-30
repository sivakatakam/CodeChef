#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int g,b,a;
        scanf("%d%d",&g,&b);
        a=b-g;
        printf("%d\n",a);
    }
}
