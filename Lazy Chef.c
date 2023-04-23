#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,m,d,s1,s2;
        scanf("%d%d%d",&x,&m,&d);
        s1=x*m;
        s2=x+d;
        if(s1<s2)
        printf("%d\n",s1);
        else
        printf("%d\n",s2);
    }
}
