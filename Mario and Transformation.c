#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);
        if(x%3==0)
        printf("NORMAL\n");
        else if(x%3==1)
        printf("HUGE\n");
        else
        printf("SMALL\n");
    }
}
