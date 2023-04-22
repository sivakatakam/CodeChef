#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,max=1;
        scanf("%d",&n);
        int a[4];
        for(i=0;i<4;i++)
        {
            scanf("%d",&a[i]);
            if(max<a[i])
            max=a[i];
        }
        printf("%d\n",max);
    }
}
