#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int r1,r2,r3;
        scanf("%d%d%d",&r1,&r2,&r3);
        if(r1>r2+r3||r2>r1+r3||r3>r1+r2)
        printf("YES\n");
        else
        printf("NO\n");
    }
}
