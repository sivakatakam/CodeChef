#include<stdio.h>
int main()
{
    int t,k,c=0;
    scanf("%d%d",&t,&k);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n%k==0)
        c++;
    }
    printf("%d\n",c);
}
