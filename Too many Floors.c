#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,a,b,s;
        scanf("%d%d",&x,&y);
        if(x%10==0)
        a=x/10;
        else
        a=(x/10)+1;
        if(y%10==0)
        b=y/10;
        else
        b=(y/10)+1;
        s=abs(a-b);
        printf("%d\n",s);
    }
}
