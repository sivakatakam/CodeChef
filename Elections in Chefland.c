#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x;
        scanf("%d%d",&n,&x);
        int a[n],c=0,i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>=x)
            c++;
        }
        printf("%d\n",c);
    }
}
