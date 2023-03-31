#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,p,s;
        scanf("%d%d%d",&n,&x,&p);
        s=(x*3)-(n-x);
        if(s>=p)
        printf("PASS\n");
        else
        printf("FAIL\n");
    }
}
