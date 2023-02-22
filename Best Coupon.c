#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,p;
        scanf("%d",&x);
        p=x/10;
        if(p>100)
        printf("%d\n",p);
        else
        printf("100\n");
    }
}
