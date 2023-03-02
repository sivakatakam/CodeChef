#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,a,b;
        scanf("%d%d%d",&x,&a,&b);
        if(x<=a+b*2)
        printf("Qualify\n");
        else
        printf("NotQualify\n");
    }
}
