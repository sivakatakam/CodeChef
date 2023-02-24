#include<stdio.h>
int main()
{
    int t,e=0,o=0;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n%2==0)
        e++;
        else
        o++;
    }
    if(e>o)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
}
