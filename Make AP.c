#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,c,b;
        scanf("%d%d",&a,&c);
        if((a+c)%2==0)
        {
            b=(a+c)/2;
            printf("%d\n",b);
        }
        else
        printf("-1\n");
    }
}
