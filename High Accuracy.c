#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,x;
        scanf("%d",&x);
        a=x%3;
        if(a==1)
        a=2;
        else if(a==2)
        a=1;
        printf("%d\n",a);
    }
}
