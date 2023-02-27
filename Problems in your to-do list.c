#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,c=0;
        scanf("%d",&n);
        while(n--)
        {
            int x;
            scanf("%d",&x);
            if(x>=1000)
            c++;
        }
        printf("%d\n",c);
    }
}
