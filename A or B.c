#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,s1,s2;
        scanf("%d%d",&a,&b);
        s1=(500-(2*a))+(1000-(4*(a+b)));
        s2=(1000-(4*b))+(500-(2*(a+b)));
        if(s1>s2)
        printf("%d\n",s1);
        else
        printf("%d\n",s2);
    }
}
