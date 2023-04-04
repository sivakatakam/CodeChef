#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,k,d,s;
        scanf("%d%d%d",&a,&b,&k);
        d=abs(a-b);
        if(d%k==0)
        s=d/k;
        else
        s=1+(d/k);
        printf("%d\n",s);
    }
}
