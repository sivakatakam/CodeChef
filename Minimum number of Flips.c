#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,s,m=0,p=0;
        scanf("%d",&n);
        int a[n],i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]==1)
            p++;
            else
            m++;
        }
        if(n%2==0)
        s=abs(p-m)/2;
        else
        s=-1;
        printf("%d\n",s);
    }
}
