#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x1,y1,x2,y2,a,b,max;
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        a=abs(x2-x1);
        b=abs(y2-y1);
        if(a>b)
        max=a;
        else
        max=b;
        printf("%d\n",max);
    }
}
