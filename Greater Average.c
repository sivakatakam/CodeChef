#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        float ave;
        scanf("%d%d%d",&a,&b,&c);
        ave=(a+b)/2.0;
        if(ave>c)
        printf("YES\n");
        else
        printf("NO\n");
    }
}
