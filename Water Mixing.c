#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int h,c,b,p,a;
        scanf("%d%d%d%d",&b,&p,&h,&c);
        a=abs(p-b);
        if(p>b)
        {
            if(a<=h)
            printf("YES\n");
            else
            printf("NO\n");
        }
        else
        {
            if(a<=c)
            printf("YES\n");
            else
            printf("NO\n");
        }
    }
}
