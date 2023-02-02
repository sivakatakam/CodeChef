#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,f;
        scanf("%d%d%d",&a,&b,&c);
        f=a*4+b*2;
        printf("%d\n",f);
    }
}
