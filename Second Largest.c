#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,max2;
        scanf("%d%d%d",&a,&b,&c);
        if(a>b&&b>c||c>b&&b>a)
        max2=b;
        else if(b>a&&a>c||c>a&&a>b)
        max2=a;
        else if(a>c&&c>b||b>c&&c>a)
        max2=c;
        printf("%d\n",max2);
    }
}
