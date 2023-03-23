#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int h,x,y,a,i;
        scanf("%d%d%d",&h,&x,&y);
        a=y;
        if(a<h)
        {
            for(i=1;a<h;i++)
            a=a+x;
        }
        else
        i=1;
        printf("%d\n",i);
    }
}
