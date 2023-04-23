#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long n;
        int i,c=0;
        scanf("%ld",&n);
        if(n>1)
        {
            for(i=2;i<=n/2;i++)
            {
                if(n%i==0)
                c++;
            }
            if(c==0)
            printf("yes\n");
            else
            printf("no\n");
        }
        else
        printf("no\n");
    }
}
