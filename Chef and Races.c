#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,a,b,c=2;
        scanf("%d%d%d%d",&x,&y,&a,&b);
        if(x==a||x==b)
        {
            c--;
            if(y==a||y==b)
            c--;
        }
        else if(y==a||y==b)
        {
            c--;
            if(x==a||x==b)
            c--;
        }
        printf("%d\n",c);
    }
}
