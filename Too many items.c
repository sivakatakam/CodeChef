#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,s;
        scanf("%d",&n);
        if(n%10==0)
        s=n/10;
        else
        s=(n/10)+1;
        printf("%d\n",s);
    }
}
