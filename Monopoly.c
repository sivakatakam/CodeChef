#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int p,q,r,s;
        scanf("%d%d%d%d",&p,&q,&r,&s);
        if(p>q+r+s||q>p+r+s||r>p+q+s||s>p+q+r)
        printf("YES\n");
        else
        printf("NO\n");
    }
}
