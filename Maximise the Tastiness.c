#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,d,s;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a>=b)
        {
            if(c>=d)
            s=a+c;
            else
            s=a+d;
        }
        else
        {
            if(c>=d)
            s=b+c;
            else
            s=b+d;
        }
        printf("%d\n",s);
    }
}
