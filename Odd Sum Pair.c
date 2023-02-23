#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if((a+b)%2!=0||(b+c)%2!=0||(a+c)%2!=0)
        printf("YES\n");
        else
        printf("NO\n");
        
    }
}
