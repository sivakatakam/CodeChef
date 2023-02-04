#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        scanf("%d%d",&a,&b);
        c=a+b;
        if(c%2==0)
        printf("YES\n");
        else
        printf("NO\n");
    }
}
