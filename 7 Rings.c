#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,a,d;
        scanf("%d%d",&n,&x);
        a=n*x;
        d=log10(a)+1;
        if(d==5&&d%10!=0)
        printf("YES\n");
        else
        printf("NO\n");
    }
}
