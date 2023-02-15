#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,t;
        scanf("%d%d%d",&a,&b,&c);
        t=a+b+c;
        if(t>=100&&a>=10&&b>=10&&c>=10)
        printf("PASS\n");
        else
        printf("FAIL\n");
    }
}
