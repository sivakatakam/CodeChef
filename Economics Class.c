#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,s=0;
        scanf("%d",&n);
        int a[n],b[n];
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(int i=0;i<n;i++)
        scanf("%d",&b[i]);
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[i])
            s++;
        }
        printf("%d\n",s);
    }
}
