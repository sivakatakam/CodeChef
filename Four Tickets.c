#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);
        if(x<=250)
        printf("YES\n");
        else
        printf("NO\n");
    }
}
