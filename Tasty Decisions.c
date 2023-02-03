#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,cho,ca;
        scanf("%d%d",&a,&b);
        cho=2*a;
        ca=5*b;
        if(cho>ca)
        printf("Chocolate\n");
        else if(cho<ca)
        printf("Candy\n");
        else
        printf("Either\n");
    }
}
