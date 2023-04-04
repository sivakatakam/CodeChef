#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,s,m;
        scanf("%d%d%d",&a,&b,&c);
        if(a>=b&&b>=c)
        s=c;
        else if(b>=c&&c>=a)
        s=a;
        else if(a>=c&&c>=b)
        s=b;
        else if(b>=a&&a>=c)
        s=c;
        else if(c>=a&&a>=b)
        s=b;
        else if(c>=b&&b>=a)
        s=a;
        m=a+b+c-s;
        printf("%d\n",m);
    }
}
