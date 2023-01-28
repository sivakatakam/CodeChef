#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,a;
        scanf("%d",&x);
        if(x>100)
        {
            a=x-10;
            printf("%d\n",a);
        }
        else
        printf("%d\n",x);
    }
}
