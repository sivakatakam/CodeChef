#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,a;
        scanf("%d",&x);
        if(x<300)
        printf("3000\n");
        else
        {
            a=x*10;
            printf("%d\n",a);
        }
    }
}
